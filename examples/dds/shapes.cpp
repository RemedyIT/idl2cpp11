/**
 * @file   sender.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  Shapes DataWriter example using the IDL to C++11
 *         language mapping
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "dds/dds_domain_participant_factory.h"
#include "dds/dds_vendor_adapter.h"
#include "shapes_shapetype_msg_ndds_traits.h"
#include <iostream>
#include <chrono>
#include <thread>

int main (int , char *[])
{
  DDS::ReturnCode_t retcode = DDS::RETCODE_OK;

  try
    {
      // Next line should be hidden into the proxy
      CIAOX11::DDS_PROXY::VendorUtils::init_dds_logging ();
      // maybe have a special define to hide the init_dds call in the same way as dds vendors do?
      // should be DDS::DomainParticipantFactory::get_instance ();
      IDL::traits<DDS::DomainParticipantFactory >::ref_type participant_factory =
        CIAOX11::DDS_PROXY::VendorUtils::init_dds ();

      DDS::DomainParticipantQos qos;
      retcode = participant_factory->get_default_participant_qos (qos);
      if (retcode != DDS::RETCODE_OK) {
        std::cerr << "Retrieving default participant QoS failed with " << retcode << std::endl;
      }

      IDL::traits<DDS::DomainParticipant>::ref_type domain_participant =
        participant_factory->create_participant (0, qos, nullptr, 0);

      DDS::PublisherQos pqos;
      retcode = domain_participant->get_default_publisher_qos (pqos);
      if (retcode != DDS::RETCODE_OK) {
        std::cerr << "Retrieving default publisher QoS failed with " << retcode << std::endl;
      }

      IDL::traits<DDS::Publisher>::ref_type publisher =
        domain_participant->create_publisher (pqos, nullptr, 0);

      DDS::traits<ShapeType>::register_type (domain_participant, "ShapeType");

      DDS::TopicQos tqos;
      retcode = domain_participant->get_default_topic_qos (tqos);
      if (retcode != DDS::RETCODE_OK) {
        std::cerr << "Retrieving default topic QoS failed with " << retcode << std::endl;
      }

      IDL::traits<DDS::Topic>::ref_type topic = domain_participant->create_topic (
        "Square", DDS::traits<ShapeType>::get_type_name (), tqos, nullptr, 0);

      DDS::DataWriterQos dwqos;
      retcode = publisher->get_default_datawriter_qos (dwqos);
      if (retcode != DDS::RETCODE_OK) {
        std::cerr << "Retrieving default data writer QoS failed with " << retcode << std::endl;
      }

      IDL::traits<DDS::DataWriter>::ref_type dw =
        publisher->create_datawriter (topic, dwqos, nullptr, 0);

      IDL::traits<ShapeTypeDataWriter>::ref_type shape_dw =
        IDL::traits<ShapeTypeDataWriter>::narrow (dw);

      ShapeType square {"GREEN", 10, 10, 25};

      DDS::InstanceHandle_t instance_handle =
        shape_dw->register_instance (square);

      for (uint32_t i = 0; i < 100; ++i)
      {
        shape_dw->write (square, instance_handle);
        ++square.x(); ++square.y();

        std::this_thread::sleep_for (std::chrono::milliseconds (100));
      }

      shape_dw->unregister_instance (square, instance_handle);
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what () << std::endl;
      return 1;
    }

  return retcode == DDS::RETCODE_OK ? 0 : 1;
}

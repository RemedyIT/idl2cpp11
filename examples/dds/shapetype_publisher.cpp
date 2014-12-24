/**
 * @file   shapetype_publisher.cpp
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

// X11_FUZZ: disable check_cout_cerr

int main (int , char *[])
{
  DDS::ReturnCode_t retcode = DDS::RETCODE_OK;

  try
    {
      DDS::traits<ShapeType>::domainparticipant_ref_type domain_participant =
        DDS::traits<DDS::DomainParticipantFactory>::get_instance ()->create_participant (
          0, DDS::PARTICIPANT_QOS_DEFAULT, nullptr, 0);

      retcode = DDS::traits<ShapeType>::register_type (domain_participant, "ShapeType");
      if (retcode != DDS::RETCODE_OK)
      {
        std::cerr << "Sender: Failed to register type." << std::endl;
        return 1;
      }

      DDS::traits<ShapeType>::topic_ref_type topic = domain_participant->create_topic (
        "Square", DDS::traits<ShapeType>::get_type_name (), DDS::TOPIC_QOS_DEFAULT, nullptr, 0);

      DDS::traits<ShapeType>::publisher_ref_type publisher =
        domain_participant->create_publisher (DDS::PUBLISHER_QOS_DEFAULT, nullptr, 0);

      if (publisher && topic)
      {
        DDS::traits<ShapeType>::datawriter_ref_type dw =
          publisher->create_datawriter (topic, DDS::DATAWRITER_QOS_DEFAULT, nullptr, 0);

        DDS::traits<ShapeType>::typed_datawriter_ref_type shape_dw =
          DDS::traits<ShapeType>::narrow (dw);

        if (shape_dw)
        {
          ShapeType square {"GREEN", 10, 10, 25};

          DDS::InstanceHandle_t instance_handle =
            shape_dw->register_instance (square);

          for (uint32_t i = 0; i < 100; ++i)
          {
            shape_dw->write (square, instance_handle);
            std::cout << "Written sample " << square << std::endl;
            ++square.x(); ++square.y();
            std::this_thread::sleep_for (std::chrono::milliseconds (10));
          }
          std::cout << std::endl << "Written 100 samples. Last sample: " << square
            << std::endl;

          shape_dw->unregister_instance (square, instance_handle);
        }
        else
        {
          std::cerr << "Sender: Typed datawriter is nill." << std::endl;
          retcode = DDS::RETCODE_ERROR;
        }
      }
      else
      {
        std::cerr << "Sender: Either Topic or Publisher is nill." << std::endl;
        retcode = DDS::RETCODE_ERROR;
      }
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what () << std::endl;
      return 1;
    }

  return retcode == DDS::RETCODE_OK ? 0 : 1;
}

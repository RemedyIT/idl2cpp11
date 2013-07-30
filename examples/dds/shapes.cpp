/**
 * @file   shapes.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  Shapes DataWriter example using the IDL to C++11
 *         language mapping
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "shapetypetypesupportC.h"
#include "dds/ddsdcpsC.h"
#include "tao/x11/log.h"

int main (int, char*[])
{
  try
    {
      // Get the dpf, this is like ORB_init
      IDL::traits<DDS::DomainParticipantFactory>::ref_type dpf;

      // Get the domain participant
      DDS::DomainId_t domain = 0;
      DDS::DomainParticipantQos dpqos;
      dpf->get_default_participant_qos (dpqos);
      IDL::traits<DDS::DomainParticipant>::ref_type participant =
        dpf->create_participant(domain,
                                dpqos,
                                0,
                                OpenDDS::DCPS::DEFAULT_STATUS_MASK);

      DDS::TopicQos topic_qos;
      std::string topic_name ("SQUARE");

      // Get the default QOS
      participant->get_default_topic_qos(topic_qos);
      topic_qos.history ().kind (DDS::HistoryQosPolicyKind::KEEP_LAST_HISTORY_QOS);
      topic_qos.history ().depth (100);

      // Register TypeSupport (ShapeType)
      IDL::traits<ShapeTypeTypeSupport>::ref_type ts;
      // Should use CORBA::make_reference <ShapeTypeTypeSupportImpl> ()

      if (ts->register_type(participant, "ShapeType") != DDS::RETCODE_OK) {
          std::cerr << "Could not register type " << std::endl;
      }

      std::string type_name = ts->get_type_name();
      IDL::traits <DDS::Topic>::ref_type circle_topic_ =
        participant->create_topic(topic_name,
                                  type_name,
                                  topic_qos,
                                  0,
                                  OpenDDS::DCPS::DEFAULT_STATUS_MASK);
      if (!circle_topic_) {
          std::cerr << "Could not create topic " << topic_name << std::endl;
      }

      DDS::PublisherQos pub_qos;
      participant->get_default_publisher_qos(pub_qos);
      // Create Publisher
      IDL::traits <DDS::Publisher>::ref_type publisher =
        participant->create_publisher(pub_qos,
                                      0,
                                      OpenDDS::DCPS::DEFAULT_STATUS_MASK);

      if (!publisher) {
          std::cerr << "Could not create publisher " << std::endl;
      }

      ShapeType shape ("ORANGE", 50, 50, 50);

      // Create DataWriter
      DDS::DataWriterQos writer_qos;
      publisher->get_default_datawriter_qos(writer_qos);
      IDL::traits<DDS::DataWriter>::ref_type writer =
          publisher->create_datawriter(circle_topic_,
                                      writer_qos,
                                      0,
                                      OpenDDS::DCPS::DEFAULT_STATUS_MASK);

      IDL::traits<ShapeTypeDataWriter>::ref_type dw =
        IDL::traits<ShapeTypeDataWriter>::narrow(writer);

      if (!dw) {
          std::cerr << "Could not create data writer " << std::endl;
      }

      // Write a sample to DDS
      dw->write(shape, ::DDS::HANDLE_NIL);
    }
  catch (const std::exception& e)
    {
      taox11_error << "exception caught: " << e.what () << std::endl;
      return 1;
    }

  return 0;


}
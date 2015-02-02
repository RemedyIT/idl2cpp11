/**
 * @file   receiver.cpp
 * @author Marcel Smit <msmit@remedy.nl>
 *
 * @brief  Shapes Subscriber example using the IDL to C++11
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

int16_t received_ = 0;

// X11_FUZZ: disable check_cout_cerr

class ShapeTypeListener final :
  public DDS::traits<ShapeType>::datareaderlistener_type
{
public:
  void
  on_requested_deadline_missed (
    DDS::traits<ShapeType>::datareader_ref_type the_reader,
    const DDS::RequestedDeadlineMissedStatus& status) override;

  void
  on_requested_incompatible_qos (
    DDS::traits<ShapeType>::datareader_ref_type the_reader,
    const DDS::RequestedIncompatibleQosStatus& status) override;

  void
  on_sample_rejected (
    DDS::traits<ShapeType>::datareader_ref_type the_reader,
    const DDS::SampleRejectedStatus& status) override;

  void
  on_liveliness_changed (
    DDS::traits<ShapeType>::datareader_ref_type the_reader,
    const DDS::LivelinessChangedStatus& status) override;

  void
  on_subscription_matched (
      DDS::traits<ShapeType>::datareader_ref_type the_reader,
      const DDS::SubscriptionMatchedStatus& status) override;

  void
  on_sample_lost (
      DDS::traits<ShapeType>::datareader_ref_type the_reader,
      const DDS::SampleLostStatus& status) override;

  void
  on_data_available (
    DDS::traits<ShapeType>::datareader_ref_type the_reader) override;

};

int main (int , char *[])
{
  DDS::ReturnCode_t retcode = DDS::RETCODE_OK;

  try
    {
      DDS::traits<ShapeType>::domainparticipant_ref_type domain_participant =
        DDS::traits< DDS::DomainParticipantFactory >::get_instance ()->create_participant (
          0, DDS::PARTICIPANT_QOS_DEFAULT, nullptr, 0);

      retcode = DDS::traits<ShapeType>::register_type (domain_participant, "ShapeType");
      if (retcode != DDS::RETCODE_OK)
      {
        std::cerr << "Receiver: Failed to register type." << std::endl;
        return 1;
      }

      DDS::traits<ShapeType>::topic_ref_type topic = domain_participant->create_topic (
        "Square", DDS::traits<ShapeType>::get_type_name (), DDS::TOPIC_QOS_DEFAULT, nullptr, 0);

      DDS::traits<ShapeType>::subscriber_ref_type subscriber =
        domain_participant->create_subscriber (DDS::SUBSCRIBER_QOS_DEFAULT, nullptr, 0);

      if (topic && subscriber)
      {
        DDS::traits<ShapeType>::datareaderlistener_ref_type listener =
          DDS::make_reference<ShapeTypeListener>();
        subscriber->create_datareader (topic, DDS::DATAREADER_QOS_DEFAULT, listener, DDS::DATA_AVAILABLE_STATUS);

        // No Qos so it could be that we're missing samples.
        while (received_ < 75)
          std::this_thread::sleep_for (std::chrono::milliseconds (100));

        std::cout << "Received enough. Closing..." << std::endl;
      }
      else
      {
        std::cerr << "Receiver: Either Topic or Subscriber is nill." << std::endl;
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

void
ShapeTypeListener::on_requested_deadline_missed (
  DDS::traits<ShapeType>::datareader_ref_type ,
  const DDS::RequestedDeadlineMissedStatus& )
{
  std::cout << "ShapeTypeListener::on_requested_deadline_missed received"
    << std::endl;
}

void
ShapeTypeListener::on_requested_incompatible_qos (
  DDS::traits<ShapeType>::datareader_ref_type ,
  const DDS::RequestedIncompatibleQosStatus& )
{
  std::cout << "ShapeTypeListener::on_requested_incompatible_qos received"
    << std::endl;
}

void
ShapeTypeListener::on_sample_rejected (
  DDS::traits<ShapeType>::datareader_ref_type ,
  const DDS::SampleRejectedStatus& )
{
  std::cout << "ShapeTypeListener::on_sample_rejected received"
    << std::endl;
}

void
ShapeTypeListener::on_liveliness_changed (
  DDS::traits<ShapeType>::datareader_ref_type ,
  const DDS::LivelinessChangedStatus& )
{
  std::cout << "ShapeTypeListener::on_liveliness_changed received"
    << std::endl;
}

void
ShapeTypeListener::on_subscription_matched (
  DDS::traits<ShapeType>::datareader_ref_type ,
  const DDS::SubscriptionMatchedStatus& )
{
  std::cout << "ShapeTypeListener::on_subscription_matched received"
    << std::endl;
}

void
ShapeTypeListener::on_sample_lost (
  DDS::traits<ShapeType>::datareader_ref_type ,
  const DDS::SampleLostStatus& )
{
  std::cout << "ShapeTypeListener::on_sample_lost received"
    << std::endl;
}

void
ShapeTypeListener::on_data_available (
  DDS::traits<ShapeType>::datareader_ref_type the_reader)
{
  DDS::traits<ShapeType>::typed_datareader_ref_type rd =
    DDS::traits<ShapeType>::narrow (the_reader);

  ShapeType shape;
  DDS::SampleInfo info;
  for(;;)
  {
    DDS::ReturnCode_t retcode = rd->take_next_sample(shape, info);
    if (retcode == DDS::RETCODE_NO_DATA)
    {
      /* No more samples */
      break;
    }
    else if (retcode != DDS::RETCODE_OK)
    {
      std::cerr << "Unable to take data from data reader, error " << retcode << std::endl;
      break;
    }
    else if (info.valid_data ())
    {
      std::cout << "Received <" << ++received_ << ">: " << shape << std::endl;
    }
  }
}


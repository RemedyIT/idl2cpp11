/*!
 * @file   hello_sender_exec.cpp
 * @author
 *
 * @brief  CIAO C++11 hello sender component
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "hello_sender_exec.h"
#include "ace/OS_NS_unistd.h"
#include "tao/x11/log.h"

namespace CIAO_Hello_Sender_Impl
{
  //============================================================
  // Worker thread for synchronous invocations for MyFoo
  //============================================================
  synch_foo_generator::synch_foo_generator (
     IDL::traits<Hello::CCM_Sender_Context>::ref_type context)
  : ciao_context_(context)
  {
  }

  int synch_foo_generator::svc ()
  {
    ACE_OS::sleep (3);
    IDL::traits<Hello::MyFoo>::ref_type my_foo_ami_ =
         ciao_context_->get_connection_run_my_foo ();

    //run synch calls
    std::string out_str;
    for (int i = 0; i < 5; ++i)
      {
        int32_t result = my_foo_ami_->foo ("Do something synchronous",
                                                out_str);

        taox11_info << "Sender (SYNCH):\tInvoked synchronous call (FOO) "
                    << "result <" << result << "> answer <" << out_str << std::endl;

        int32_t answer;
        my_foo_ami_->hello (answer);

        taox11_info << "Sender (SYNCH):\tInvoked synchronous call "
                    << "(HELLO) answer <" << answer << ">" << std::endl;

        try
          {
            int16_t rw_attrib = my_foo_ami_->rw_attrib ();
            taox11_info << "Sender (SYNCH):\tInvoked synchronous call "
                        << "(GET_RW_ATTRIB) answer <" << rw_attrib << ">" << std::endl;
          }
        catch (const Hello::InternalError& ex)
          {
            taox11_info << "Sender (SYNCH FOO) :\tExpected exception caught: " << ex << std::endl;
          }

        try
          {
            my_foo_ami_->rw_attrib (15);
            taox11_info << "Sender (SYNCH):\tInvoked synchronous call "
                        << "(SET_RW_ATTRIB) to <15>\n";
          }
        catch (const Hello::InternalError& ex)
          {
            taox11_info << "Sender (SYNCH FOO) :\tExpected exception caught :" << ex << std::endl;
          }

        try
          {
            int16_t ro_attrib = my_foo_ami_->ro_attrib ();
            taox11_info << "Sender (SYNCH):\tInvoked synchronous call "
                        << "(GET_RO_ATTRIB) answer <" << ro_attrib << ">" << std::endl;
          }
        catch (const Hello::InternalError& ex)
          {
            taox11_info << "Sender (SYNCH FOO) :\tExpected exception caught :" << ex << std::endl;
          }
      }
    try
      {
        int32_t result = my_foo_ami_->foo ("", out_str);
        taox11_info << "Sender (SYNCH) :\tInvoked synchronous call result "
                    << "<" << result << "> answer <" << out_str << ">" << std::endl;
      }
    catch (const Hello::InternalError& ex)
      {
        taox11_info << "Sender (SYNCH FOO) :\tExpected exception caught : " << ex << std::endl;
      }
    try
      {
        my_foo_ami_->rw_attrib (0);
        taox11_info << "Sender (SYNCH) :\tInvoked synchronous call rw_attrib\n" << std::endl;
      }
    catch (const Hello::InternalError& ex)
      {
        taox11_info << "Sender (SYNCH RW_ATTRIB) :\tExpected exception caught :" << ex << std::endl;
      }
    catch (const std::exception& ex)
      {
        taox11_error << "ERROR: Caught unexpected exception: " << ex << std::endl;
      }
    return 0;
  }

  //============================================================
  // Component Executor Implementation Class: Sender_exec_i
  //============================================================
  Sender_exec_i::Sender_exec_i ()
  {
  }

  Sender_exec_i::~Sender_exec_i ()
  {
  }

  // Supported operations and attributes.

  // Component attributes.

  // Port operations.
  // Operations from Components::SessionComponent.

  void
  Sender_exec_i::set_session_context (
     IDL::traits<Components::SessionContext>::ref_type ctx)
  {
    this->ciao_context_ =
      IDL::traits<Hello::CCM_Sender_Context>::narrow (ctx);
    if (!this->ciao_context_)
  }

  void
  Sender_exec_i::configuration_complete ()
  {
  }

  void
  Sender_exec_i::ccm_activate ()
  {
    std::unique_ptr<synch_foo_generator> l (new synch_foo_generator (this->ciao_context_));
    this->synch_foo_gen_ = std::move(l);
    this->synch_foo_gen_->activate (THR_NEW_LWP | THR_JOINABLE, 1);
  }

  void
  Sender_exec_i::ccm_passivate ()
  {
  }

  void
  Sender_exec_i::ccm_remove ()
  {
  }

  extern "C" HELLO_SENDER_EXEC_Export IDL::traits<Components::EnterpriseComponent>::ref_type
  create_Hello_Sender_Impl ()
  {
    return CORBA::make_reference <Sender_exec_i> ();
  }
}

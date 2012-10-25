// -*- C++ -*-

#include "hello_sender_exec.h"
#include "ace/OS_NS_unistd.h"

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
        ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH):\tInvoked synchronous call (FOO)")
                ACE_TEXT(" result <%u> answer <%C>\n"), result, out_str.c_str ()));

        int32_t answer;
        my_foo_ami_->hello (answer);
        ACE_DEBUG ((LM_DEBUG,
                 ACE_TEXT("Sender (SYNCH):\tInvoked synchronous call ")
                 ACE_TEXT("(HELLO) answer <%u>\n"), answer));

        try
          {
            int16_t rw_attrib = my_foo_ami_->rw_attrib ();
            ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH):\tInvoked synchronous call ")
                ACE_TEXT("(GET_RW_ATTRIB) answer <%u>\n"), rw_attrib));
          }
        catch (const Hello::InternalError& ex)
          {
            ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH FOO) :\tExpected Except caught :")
                ACE_TEXT(" <%u> <%C>\n"), ex.id (), ex.error_string ().c_str ()));
          }

        try
          {
            my_foo_ami_->rw_attrib (15);
            ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH):\tInvoked synchronous call ")
                ACE_TEXT("(SET_RW_ATTRIB) to <15>\n")));
          }
        catch (const Hello::InternalError& ex)
          {
            ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH FOO) :\tExpected Except caught :")
                ACE_TEXT(" <%u> <%C>\n"), ex.id (), ex.error_string ().c_str ()));
          }

        try
          {
            int16_t ro_attrib = my_foo_ami_->ro_attrib ();
            ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH):\tInvoked synchronous call ")
                ACE_TEXT("(GET_RO_ATTRIB) answer <%u>\n"), ro_attrib));
          }
        catch (const Hello::InternalError& ex)
          {
            ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH FOO) :\tExpected Except caught :")
                ACE_TEXT(" <%u> <%C>\n"), ex.id(), ex.error_string ().c_str ()));
          }
      }
    try
      {
        int32_t result = my_foo_ami_->foo ("", out_str);
        ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH) :\tInvoked synchronous call result ")
                ACE_TEXT("<%u> answer <%C>\n"), result, out_str.c_str ()));
      }
    catch (const Hello::InternalError& ex)
      {
        ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH FOO) :\tExpected Except caught : ")
                ACE_TEXT("<%u> <%C>\n"), ex.id (), ex.error_string ().c_str ()));
      }
    try
      {
        my_foo_ami_->rw_attrib (0);
        ACE_DEBUG ((LM_DEBUG,
            ACE_TEXT("Sender (SYNCH) :\tInvoked synchronous call rw_attrib\n")));
      }
    catch (const Hello::InternalError& ex)
      {
        ACE_DEBUG ((LM_DEBUG,
                ACE_TEXT("Sender (SYNCH RW_ATTRIB) :\tExpected Except caught :")
                ACE_TEXT(" <%u> <%C>\n"), ex.id (), ex.error_string ().c_str ()));
      }
    catch (const CORBA::Exception& ex)
      {
//         ex._tao_print_exception ("ERROR: Caught unexpected except:");
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
      {
        throw CORBA::INTERNAL ();
      }
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

  IDL::traits<CORBA::Object>::ref_type
  Sender_exec_i::get_facet_executor (const std::string& /*facet*/)
  {
    return nullptr;
  }

  extern "C" HELLO_SENDER_EXEC_Export IDL::traits<Components::EnterpriseComponent>::ref_type
  create_Hello_Sender_Impl ()
  {
    return CORBA::make_reference <Sender_exec_i> ();
  }
}

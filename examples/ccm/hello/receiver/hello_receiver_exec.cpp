/*--------------------------------------------------------------------
 * hello_receiver_exec.cpp - CIAO C++11 hello receiver component
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#include "hello_receiver_exec.h"
#include "ace/OS_NS_unistd.h"

namespace CIAO_Hello_Receiver_Impl
{
  MyFoo_exec_i::MyFoo_exec_i (
   IDL::traits<Hello::CCM_Receiver_Context>::ref_type ctx)
  : ciao_context_ (ctx),
      get_rw_ (false),
      get_ro_ (false)
  {
  }

  MyFoo_exec_i::~MyFoo_exec_i ()
  {
  }

  int32_t
  MyFoo_exec_i::foo (const std::string& in_str, std::string& answer)
  {
    if (in_str.length () == 0)
      {
        Hello::InternalError ex (42, "Hello world");
        throw ex;
      }
    else
      {
        ACE_OS::sleep (ACE_OS::rand () % 2);
        answer = "This is my answer : Hi";
        return ACE_OS::rand () % 100;
      }
  }

  void
  MyFoo_exec_i::hello (int32_t& answer)
  {
    ACE_OS::sleep (ACE_OS::rand () % 2);
    answer = ACE_OS::rand () % 100;
  }

  int16_t
  MyFoo_exec_i::rw_attrib ()
  {
    if (this->get_rw_)
      {
        this->get_rw_ = false;
        Hello::InternalError ex (42, "Hello world");
        throw ex;
      }
    else
      {
        ACE_OS::sleep (ACE_OS::rand () % 2);
        this->get_rw_ = true;
      }
    return ACE_OS::rand () % 100;
  }

  void
  MyFoo_exec_i::rw_attrib (int16_t new_value)
  {
    if (new_value == 0)
      {
        Hello::InternalError ex (42, "Hello world");
        throw ex;
      }
    else
      {
        ACE_OS::sleep (ACE_OS::rand () % 2);
      }
  }

  int16_t
  MyFoo_exec_i::ro_attrib ()
  {
   if (this->get_ro_)
      {
        this->get_ro_ = false;
        Hello::InternalError ex (42, "Hello world");
        throw ex;
      }
    else
      {
        ACE_OS::sleep (ACE_OS::rand () % 2);
        this->get_ro_ = true;
      }
    return ACE_OS::rand () % 100;
  }

  Receiver_exec_i::Receiver_exec_i ()
  {
  }

  Receiver_exec_i::~Receiver_exec_i ()
  {
  }

  IDL::traits<Hello::CCM_MyFoo>::ref_type
  Receiver_exec_i::get_do_my_foo ()
  {
    if (!this->ciao_do_my_foo_)
      {
        this->ciao_do_my_foo_ = CORBA::make_reference <MyFoo_exec_i> (this->context_);
      }

    return this->ciao_do_my_foo_;
  }

  void
  Receiver_exec_i::set_session_context (
    IDL::traits<Components::SessionContext>::ref_type ctx)
  {
    this->context_ = IDL::traits<Hello::CCM_Receiver_Context>::narrow (ctx);

    if (!this->context_)
      {
        throw ::CORBA::INTERNAL ();
      }
  }

  void
  Receiver_exec_i::configuration_complete ()
  {
  }

  void
  Receiver_exec_i::ccm_activate ()
  {
  }

  void
  Receiver_exec_i::ccm_passivate ()
  {
  }

  void
  Receiver_exec_i::ccm_remove ()
  {
  }

  IDL::traits<CORBA::Object>::ref_type
  Receiver_exec_i::get_facet_executor (
    const std::string& name)
  {
    if (name == "do_my_foo")
      {
        return this->get_do_my_foo ();
      }

    return nullptr;
  }

  extern "C"  IDL::traits<Components::EnterpriseComponent>::ref_type
  create_Hello_AMI_Receiver_Impl ()
  {
    return CORBA::make_reference <Receiver_exec_i> ();
  }
}

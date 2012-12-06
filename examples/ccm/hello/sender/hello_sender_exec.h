/*--------------------------------------------------------------------
 * hello_sender_exec.h - CIAO C++11 hello sender component
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#ifndef CIAO_HELLO_SENDER_EXEC_JDPMZZ_H_
#define CIAO_HELLO_SENDER_EXEC_JDPMZZ_H_

#include /**/ "ace/pre.h"

#include "Hello_SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "Hello_Sender_exec_export.h"
#include "ace/Task.h"

namespace CIAO_Hello_Sender_Impl
{
  /// Worker thread for synchronous invocations
  class synch_foo_generator final : public ACE_Task_Base
  {
  public:
    synch_foo_generator (IDL::traits<Hello::CCM_Sender_Context>::ref_type context);

    virtual int svc () override;

  private:
    IDL::traits<Hello::CCM_Sender_Context>::ref_type ciao_context_;
  };

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i final : public CIAO_Hello_Sender_Impl::Sender_Exec
  {
  public:
    Sender_exec_i ();
    virtual ~Sender_exec_i ();

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (IDL::traits<Components::SessionContext>::ref_type ctx) override;
    virtual void configuration_complete () override;
    virtual void ccm_activate () override;
    virtual void ccm_passivate () override;
    virtual void ccm_remove () override;
    //@}

    //@{
    /** User defined public operations. */

    //@}

  private:
    IDL::traits<Hello::CCM_Sender_Context>::ref_type ciao_context_;

    //@{
    /** Component attributes. */
    //@}

    //@{
    /** User defined members. */

    //@}

    //@{
    /** User defined private operations. */
  private:
    std::unique_ptr<synch_foo_generator> synch_foo_gen_;
    //@}
  };

    extern "C" HELLO_SENDER_EXEC_Export IDL::traits<Components::EnterpriseComponent>::ref_type
    create_Hello_Sender_Impl ();
  }

#include /**/ "ace/post.h"

#endif /* ifndef */

// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_INCLUDED__
#define __RIDL_TESTC_H_INCLUDED__

#include <tao/0x/stddef.h>
#include <tao/0x/corba.h>

using namespace corba_0x;

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from c++/cli_hdr/interface_fwd.erb
  class Hello_stub;
  template <typename T> class Hello_ref;
  typedef Hello_ref <Hello_stub> Hello;

  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
  class Hello_Factory_stub;
  template <typename T> class Hello_Factory_ref;
  typedef Hello_Factory_ref <Hello_Factory_stub> Hello_Factory;

  class Hello_Factory_proxy;
  typedef Hello_Factory_proxy* Hello_Factory_proxy_ptr;

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_Factory_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Hello_Factory_ref <Hello_Factory_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    virtual Test::Hello get_hello (void);

    // generated from c++/cli_hdr/operation.erb
    virtual void get_hello_2 (Test::Hello& hello_obj);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Hello_Factory_stub (Hello_Factory_proxy_ptr p);
  protected:
    static Hello_Factory_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Hello_Factory_stub (void) = delete;
    Hello_Factory_stub(const Hello_Factory_stub&) = delete;
    Hello_Factory_stub& operator=(const Hello_Factory_stub&) = delete;
    Hello_Factory_proxy_ptr hello_factory_proxy_;
    static const std::string repo_id_;
  }; // Hello_Factory_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Hello_Factory_ref
    : public virtual corba_0x::CORBA::Object_ref<T>
  {
  public:
    explicit Hello_Factory_ref (T *s = 0);
    Hello_Factory_ref (const Hello_Factory_ref<T>& o);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    void operator=(std::nullptr_t t);
    static Hello_Factory narrow(corba_0x::CORBA::Object obj);
  };

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
  class Hello_stub;
  template <typename T> class Hello_ref;
  typedef Hello_ref <Hello_stub> Hello;

  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Hello_ref <Hello_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    virtual std::string get_string (void);

    // generated from c++/cli_hdr/operation.erb
    virtual void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Hello_stub (Hello_proxy_ptr p);
  protected:
    static Hello_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Hello_stub (void) = delete;
    Hello_stub(const Hello_stub&) = delete;
    Hello_stub& operator=(const Hello_stub&) = delete;
    Hello_proxy_ptr hello_proxy_;
    static const std::string repo_id_;
  }; // Hello_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Hello_ref
    : public virtual corba_0x::CORBA::Object_ref<T>
  {
  public:
    explicit Hello_ref (T *s = 0);
    Hello_ref (const Hello_ref<T>& o);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    void operator=(std::nullptr_t t);
    static Hello narrow(corba_0x::CORBA::Object obj);
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

#include "TestC.inl"

#if defined (__TAO_0X_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

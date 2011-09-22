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

#include "ace/pre.h"

#include "tao/0x/stddef.h"
#include "tao/0x/corba.h"
#include "tao/0x/system_exception.h"
#include "tao/0x/orb.h"

using namespace corba_0x;

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FWD_)
#define _INTF_TEST_HELLO_FWD_
  class Hello_stub;
  class Hello_skel;
  template <typename T> class Hello_ref;
  template <typename T> class Hello_srvref;
  typedef Hello_ref <Hello_stub> Hello;
  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;

  struct Hello_traits
  {
    typedef Hello_stub stub_type;
    typedef Hello ref_type;
    typedef ref_type* ptr_type;
    typedef const ref_type* const_ptr_type;
    typedef corba_0x::ObjVar_T<Hello_traits>  var_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
    static void move (ref_type& r1, ref_type& r2);
    static const corba_0x::Object_proxy& to_proxy (const ref_type& p);
  };
#endif // !_INTF_TEST_HELLO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Hello_ref <Hello_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    std::string get_string (void);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Hello_stub (Hello_proxy_ptr p);
  protected:
    Hello_stub (void);
    static Hello_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Hello_stub(const Hello_stub&) = delete;
    Hello_stub& operator=(const Hello_stub&) = delete;
    Hello_proxy_ptr hello_proxy_;
  }; // Hello_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Hello_ref : public corba_0x::CORBA::ObjRef_T<T>
  {
  public:
    explicit Hello_ref (T *s = nullptr);
    Hello_ref (std::shared_ptr <T> &t);
    
    template<typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::ref_type*, T*>::value>::type>
    Hello_ref (_Tp1 obj) : corba_0x::CORBA::ObjRef_T<T> () { this->stub_ = obj.get_shared (); };
    template<bool VAR = true, typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::traits::stub_type*, T*>::value>::type>
    Hello_ref (_Tp1 obj) : corba_0x::CORBA::ObjRef_T<T> () { this->stub_ = obj->get_shared (); };
    void operator=(std::nullptr_t t);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    static Hello_ref<T> narrow(corba_0x::CORBA::Object obj);

    typedef Hello_srvref<Hello_skel> servant_type;
    typedef Hello_skel servant_base_type;
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

#include "TestC.inl"

#if defined (__TAO_0X_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#include "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

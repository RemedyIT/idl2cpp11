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

#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test {

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
    typedef TAOX11_NAMESPACE::ObjVar_T<Hello_traits>  var_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
    static void move (ref_type& r1, ref_type& r2);
    static const TAOX11_NAMESPACE::Object_proxy& to_proxy (const ref_type& p);
  };
#endif // !_INTF_TEST_HELLO_FWD_

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FACTORY_FWD_)
#define _INTF_TEST_HELLO_FACTORY_FWD_
  class Hello_Factory_stub;
  class Hello_Factory_skel;
  template <typename T> class Hello_Factory_ref;
  template <typename T> class Hello_Factory_srvref;
  typedef Hello_Factory_ref <Hello_Factory_stub> Hello_Factory;
  class Hello_Factory_proxy;
  typedef Hello_Factory_proxy* Hello_Factory_proxy_ptr;

  struct Hello_Factory_traits
  {
    typedef Hello_Factory_stub stub_type;
    typedef Hello_Factory ref_type;
    typedef ref_type* ptr_type;
    typedef const ref_type* const_ptr_type;
    typedef TAOX11_NAMESPACE::ObjVar_T<Hello_Factory_traits>  var_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
    static void move (ref_type& r1, ref_type& r2);
    static const TAOX11_NAMESPACE::Object_proxy& to_proxy (const ref_type& p);
  };
#endif // !_INTF_TEST_HELLO_FACTORY_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_Factory_stub
    : public virtual TAOX11_NAMESPACE::CORBA::Object_stub
  {
  public:
    friend class Hello_Factory_ref <Hello_Factory_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    Test::Hello_traits::var_type get_hello (void);

    // generated from c++/cli_hdr/operation.erb
    void get_hello_2 (Test::Hello& hello_obj);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Hello_Factory_stub (Hello_Factory_proxy_ptr p);
  protected:
    explicit Hello_Factory_stub (Hello_Factory_proxy_ptr p, bool);
    Hello_Factory_stub (void);
    static Hello_Factory_stub* narrow (TAOX11_NAMESPACE::CORBA::Object_stub* obj);

  private:
    Hello_Factory_stub(const Hello_Factory_stub&) = delete;
    Hello_Factory_stub& operator=(const Hello_Factory_stub&) = delete;
    Hello_Factory_proxy_ptr hello_factory_proxy_;
  }; // Hello_Factory_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Hello_Factory_ref : public TAOX11_NAMESPACE::CORBA::ObjRef_T<T>
  {
  public:
    explicit Hello_Factory_ref (T *s = nullptr);
    Hello_Factory_ref (std::shared_ptr <T> &t);
    
    template<typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::ref_type*, T*>::value>::type>
    Hello_Factory_ref (_Tp1 obj) : TAOX11_NAMESPACE::CORBA::ObjRef_T<T> () { this->stub_ = obj.get_shared (); };
    template<bool VAR = true, typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::traits::stub_type*, T*>::value>::type>
    Hello_Factory_ref (_Tp1 obj) : TAOX11_NAMESPACE::CORBA::ObjRef_T<T> () { this->stub_ = obj->get_shared (); };
    void operator=(std::nullptr_t t);
    operator TAOX11_NAMESPACE::CORBA::Object_ref <TAOX11_NAMESPACE::CORBA::Object_stub> ();
    static Hello_Factory_ref<T> narrow(TAOX11_NAMESPACE::CORBA::Object obj);

    typedef Hello_Factory_srvref<Hello_Factory_skel> servant_type;
    typedef Hello_Factory_skel servant_base_type;
  };

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
    typedef TAOX11_NAMESPACE::ObjVar_T<Hello_traits>  var_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
    static void move (ref_type& r1, ref_type& r2);
    static const TAOX11_NAMESPACE::Object_proxy& to_proxy (const ref_type& p);
  };
#endif // !_INTF_TEST_HELLO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_stub
    : public virtual TAOX11_NAMESPACE::CORBA::Object_stub
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
    explicit Hello_stub (Hello_proxy_ptr p, bool);
    Hello_stub (void);
    static Hello_stub* narrow (TAOX11_NAMESPACE::CORBA::Object_stub* obj);

  private:
    Hello_stub(const Hello_stub&) = delete;
    Hello_stub& operator=(const Hello_stub&) = delete;
    Hello_proxy_ptr hello_proxy_;
  }; // Hello_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Hello_ref : public TAOX11_NAMESPACE::CORBA::ObjRef_T<T>
  {
  public:
    explicit Hello_ref (T *s = nullptr);
    Hello_ref (std::shared_ptr <T> &t);
    
    template<typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::ref_type*, T*>::value>::type>
    Hello_ref (_Tp1 obj) : TAOX11_NAMESPACE::CORBA::ObjRef_T<T> () { this->stub_ = obj.get_shared (); };
    template<bool VAR = true, typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::traits::stub_type*, T*>::value>::type>
    Hello_ref (_Tp1 obj) : TAOX11_NAMESPACE::CORBA::ObjRef_T<T> () { this->stub_ = obj->get_shared (); };
    void operator=(std::nullptr_t t);
    operator TAOX11_NAMESPACE::CORBA::Object_ref <TAOX11_NAMESPACE::CORBA::Object_stub> ();
    static Hello_ref<T> narrow(TAOX11_NAMESPACE::CORBA::Object obj);

    typedef Hello_srvref<Hello_skel> servant_type;
    typedef Hello_skel servant_base_type;
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/inline.erb
#include "TestC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

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
#include "tao/x11/object.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FWD_)
#define _INTF_TEST_HELLO_FWD_
  class Hello;
  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;
  namespace POA
  {
    class Hello;
  };
#endif // !_INTF_TEST_HELLO_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++/cli_hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_HELLO_TRAITS_DECL_)
#define _INTF_TEST_HELLO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    void
    object_traits< ::Test::Hello>::destroy (
        Test::Hello*);
    template<>
    const Object_proxy*
    object_traits< ::Test::Hello>::to_proxy (
        const object_traits< ::Test::Hello>::ref_type&);
    template<>
    object_traits< ::Test::Hello>::ref_type object_traits< ::Test::Hello>::narrow (
    	 const object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type&);
  };
};
#endif // !_INTF_TEST_HELLO_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FACTORY_FWD_)
#define _INTF_TEST_HELLO_FACTORY_FWD_
  class Hello_Factory;
  class Hello_Factory_proxy;
  typedef Hello_Factory_proxy* Hello_Factory_proxy_ptr;
  namespace POA
  {
    class Hello_Factory;
  };
#endif // !_INTF_TEST_HELLO_FACTORY_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++/cli_hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_HELLO_FACTORY_TRAITS_DECL_)
#define _INTF_TEST_HELLO_FACTORY_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    void
    object_traits< ::Test::Hello_Factory>::destroy (
        Test::Hello_Factory*);
    template<>
    const Object_proxy*
    object_traits< ::Test::Hello_Factory>::to_proxy (
        const object_traits< ::Test::Hello_Factory>::ref_type&);
    template<>
    object_traits< ::Test::Hello_Factory>::ref_type object_traits< ::Test::Hello_Factory>::narrow (
    	 const object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type&);
  };
};
#endif // !_INTF_TEST_HELLO_FACTORY_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello_Factory
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    friend struct TAOX11_CORBA::object_traits< Hello_Factory>;

    typedef TAOX11_CORBA::object_traits< Hello_Factory> _traits_type;
    typedef TAOX11_CORBA::object_reference< Hello_Factory> _ref_type;

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    TAOX11_CORBA::object_reference< ::Test::Hello> get_hello (void);

    // generated from c++/cli_hdr/operation.erb
    void get_hello_2 (TAOX11_CORBA::object_reference< ::Test::Hello>& hello_obj);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_CORBA::object_reference< Hello_Factory> narrow (
        const TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object>& obj)
    {
      return TAOX11_CORBA::object_traits< Hello_Factory>::narrow (obj);
    }

    explicit Hello_Factory (Hello_Factory_proxy_ptr p);
  protected:
    explicit Hello_Factory (Hello_Factory_proxy_ptr p, bool);
    Hello_Factory (void);

  private:
    Hello_Factory(const Hello_Factory&) = delete;
    Hello_Factory& operator=(const Hello_Factory&) = delete;
    Hello_Factory_proxy_ptr hello_factory_proxy_;
  }; // Hello_Factory

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_HELLO_FWD_)
#define _INTF_TEST_HELLO_FWD_
  class Hello;
  class Hello_proxy;
  typedef Hello_proxy* Hello_proxy_ptr;
  namespace POA
  {
    class Hello;
  };
#endif // !_INTF_TEST_HELLO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Hello
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    friend struct TAOX11_CORBA::object_traits< Hello>;

    typedef TAOX11_CORBA::object_traits< Hello> _traits_type;
    typedef TAOX11_CORBA::object_reference< Hello> _ref_type;

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    std::string get_string (void);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_CORBA::object_reference< Hello> narrow (
        const TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object>& obj)
    {
      return TAOX11_CORBA::object_traits< Hello>::narrow (obj);
    }

    explicit Hello (Hello_proxy_ptr p);
  protected:
    explicit Hello (Hello_proxy_ptr p, bool);
    Hello (void);

  private:
    Hello(const Hello&) = delete;
    Hello& operator=(const Hello&) = delete;
    Hello_proxy_ptr hello_proxy_;
  }; // Hello
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

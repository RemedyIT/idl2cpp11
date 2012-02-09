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
#include "tao/x11/user_exception.h"
#include "tao/x11/object.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++/cli_hdr/except_pre.erb
  class FooEx final
   : public TAOX11_NAMESPACE::CORBA::UserException
  {
  public:

    virtual const char* what() const throw () override;

    virtual void _raise (void) const override;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const override;

    virtual void _tao_decode (TAO_InputCDR &cdr) override;

    /// Deep copy
    virtual TAOX11_NAMESPACE::CORBA::Exception *_tao_duplicate (void) const override;

    // generated from c++/cli_hdr/except_post.erb
    FooEx (void);
    virtual ~FooEx (void) throw ();
    FooEx (const FooEx&) = default;
    FooEx (FooEx&&) = default;
    explicit FooEx (std::string message);
    FooEx& operator= (const FooEx& x);
    FooEx& operator= (FooEx&& x);

    void message (const std::string& _message);
    void message (std::string&& _message);
    const std::string& message (void) const;
    std::string& message (void);

  private:
    std::string message_;
  }; // FooEx

  // generated from c++/cli_hdr/except_pre.erb
  class BooEx final
   : public TAOX11_NAMESPACE::CORBA::UserException
  {
  public:

    virtual const char* what() const throw () override;

    virtual void _raise (void) const override;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const override;

    virtual void _tao_decode (TAO_InputCDR &cdr) override;

    /// Deep copy
    virtual TAOX11_NAMESPACE::CORBA::Exception *_tao_duplicate (void) const override;

    // generated from c++/cli_hdr/except_post.erb
    BooEx (void);
    virtual ~BooEx (void) throw ();
    BooEx (const BooEx&) = default;
    BooEx (BooEx&&) = default;
    explicit BooEx (int32_t id);
    BooEx& operator= (const BooEx& x);
    BooEx& operator= (BooEx&& x);

    void id (int32_t _id);
    int32_t id (void) const;
    int32_t& id (void);

  private:
    int32_t id_;
  }; // BooEx

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
  namespace POA
  {
    class Foo;
  };
#endif // !_INTF_TEST_FOO_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++/cli_hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_FOO_TRAITS_DECL_)
#define _INTF_TEST_FOO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Foo>::ref_type
    object_traits< ::Test::Foo>::to_reference (
        ::Test::Foo*);
    template<>
    const Object_proxy*
    object_traits< ::Test::Foo>::to_proxy (
        const object_traits< ::Test::Foo>::ref_type&);
    template<>
    object_traits< ::Test::Foo>::ref_type object_traits< ::Test::Foo>::narrow (
       const object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type&);
  };
};
#endif // !_INTF_TEST_FOO_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++/cli_hdr/interface_pre.erb
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    typedef TAOX11_CORBA::object_traits< Foo> _traits_type;
    typedef TAOX11_CORBA::object_reference< Foo> _ref_type;

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    void do_it (void);

    // generated from c++/cli_hdr/attribute.erb
    int32_t a_number(void);

    // generated from c++/cli_hdr/attribute.erb
    std::string a_string(void);
    void a_string(const std::string& _v);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_CORBA::object_reference< Foo> narrow (
        const TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object>& obj)
    {
      return TAOX11_CORBA::object_traits< Foo>::narrow (obj);
    }

    explicit Foo (Foo_proxy_ptr p);
  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

    explicit Foo (Foo_proxy_ptr p, bool);
    Foo (void);
    ~Foo (void) = default;

    _shared_ptr_type _reference ()
    { return std::dynamic_pointer_cast<Foo> (this->_get_reference ()); }

  private:
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/inline.erb
#include "testC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

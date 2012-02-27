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

  // generated from c++/cli_hdr/struct_pre.erb
  class Variable final
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Variable (void);
    ~Variable (void) = default;
    Variable (const Variable&) = default;
    Variable (Variable&&) = default;
    explicit Variable (std::string name);
    Variable& operator= (const Variable& x);
    Variable& operator= (Variable&& x);

    void name (const std::string& _name);
    void name (std::string&& _name);
    const std::string& name (void) const;
    std::string& name (void);

    void swap (Variable& s);

  private:
    std::string name_;
  }; // Variable

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_BAR_FWD_)
#define _INTF_TEST_BAR_FWD_
  class Bar;
  class Bar_proxy;
  typedef Bar_proxy* Bar_proxy_ptr;
  namespace POA
  {
    class Bar;
  };
#endif // !_INTF_TEST_BAR_FWD_
  // generated from CxxWriterBase#at_global_scope
}; // Test
// entering CxxWriterBase#at_global_scope

// generated from c++/cli_hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_BAR_TRAITS_DECL_)
#define _INTF_TEST_BAR_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Bar>::shared_ptr_type
    object_traits< ::Test::Bar>::lock_shared (
        ::Test::Bar*);
    template<>
    const Object_proxy*
    object_traits< ::Test::Bar>::to_proxy (
        object_traits< ::Test::Bar>::ref_type);
    template<>
    object_traits< ::Test::Bar>::ref_type object_traits< ::Test::Bar>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };
};
#endif // !_INTF_TEST_BAR_TRAITS_DECL_

// leaving CxxWriterBase#at_global_scope
namespace Test
{

  // generated from c++/cli_hdr/interface_pre.erb
  class Bar
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    typedef TAOX11_CORBA::object_traits< Bar> _traits_type;
    typedef TAOX11_CORBA::object_reference< Bar> _ref_type;

    virtual const std::string& _interface_repository_id () const override;

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Bar::op
    virtual void op (void);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_CORBA::object_reference< Bar> _narrow (
        TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object> obj)
    {
      return TAOX11_CORBA::object_traits< Bar>::narrow (obj);
    }

  protected:
    typedef std::shared_ptr<Bar>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Bar (Bar_proxy_ptr p);
    explicit Bar (Bar_proxy_ptr p, bool);
    Bar (void);
    ~Bar (void) = default;

  private:
    Bar(const Bar&) = delete;
    Bar(Bar&&) = delete;
    Bar& operator=(const Bar&) = delete;
    Bar& operator=(Bar&&) = delete;
    Bar_proxy_ptr bar_proxy_;
  }; // Bar

  // generated from c++/cli_hdr/struct_pre.erb
  class Simple final
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Simple (void);
    ~Simple (void) = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    explicit Simple (uint8_t o,
                     int32_t l,
                     std::string s,
                     double d,
                     bool b,
                     char c,
                     TAOX11_CORBA::object_reference< ::Test::Bar> bar_ref,
                     ::Test::Variable v);
    Simple& operator= (const Simple& x);
    Simple& operator= (Simple&& x);

    void o (uint8_t _o);
    uint8_t o (void) const;
    uint8_t& o (void);

    void l (int32_t _l);
    int32_t l (void) const;
    int32_t& l (void);

    void s (const std::string& _s);
    void s (std::string&& _s);
    const std::string& s (void) const;
    std::string& s (void);

    void d (double _d);
    double d (void) const;
    double& d (void);

    void b (bool _b);
    bool b (void) const;
    bool& b (void);

    void c (char _c);
    char c (void) const;
    char& c (void);

    void bar_ref (TAOX11_CORBA::object_reference< ::Test::Bar> _bar_ref);
    TAOX11_CORBA::object_reference< ::Test::Bar> bar_ref (void) const;
    TAOX11_CORBA::object_reference< ::Test::Bar>& bar_ref (void);

    void v (const ::Test::Variable& _v);
    void v (::Test::Variable&& _v);
    const ::Test::Variable& v (void) const;
    ::Test::Variable& v (void);

    void swap (Simple& s);

  private:
    uint8_t o_;
    int32_t l_;
    std::string s_;
    double d_;
    bool b_;
    char c_;
    TAOX11_CORBA::object_reference< ::Test::Bar> bar_ref_;
    ::Test::Variable v_;
  }; // Simple

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
    object_traits< ::Test::Foo>::shared_ptr_type
    object_traits< ::Test::Foo>::lock_shared (
        ::Test::Foo*);
    template<>
    const Object_proxy*
    object_traits< ::Test::Foo>::to_proxy (
        object_traits< ::Test::Foo>::ref_type);
    template<>
    object_traits< ::Test::Foo>::ref_type object_traits< ::Test::Foo>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
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
    /// @copybrief Test::Foo::pass_struct
    virtual bool pass_struct (const ::Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::return_struct
    virtual ::Test::Simple return_struct (void);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::get_struct
    virtual bool get_struct (::Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::update_struct
    virtual bool update_struct (::Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::shutdown
    virtual void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    static TAOX11_CORBA::object_reference< Foo> _narrow (
        TAOX11_CORBA::object_reference<TAOX11_NAMESPACE::CORBA::Object> obj)
    {
      return TAOX11_CORBA::object_traits< Foo>::narrow (obj);
    }

  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p);
    explicit Foo (Foo_proxy_ptr p, bool);
    Foo (void);
    ~Foo (void) = default;

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

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Variable& m1, ::Test::Variable& m2);

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
}; // std

// generated from c++/cli_hdr/inline.erb
#include "testC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Variable& m1, ::Test::Variable& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::Test::Simple& m1, ::Test::Simple& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++/cli_hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

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

#include "tao/0x/stddef.h"
#include "tao/0x/corba.h"

using namespace corba_0x;

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from c++/cli_hdr/struct_pre.erb
  class Simple
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Simple (void);
    Simple (uint8_t o,
            int32_t l,
            std::string s,
            double d,
            bool b,
            char c);
    Simple (const uint8_t& o,
            const int32_t& l,
            const std::string& s,
            const double& d,
            const bool& b,
            const char& c);
    Simple (uint8_t&& o,
            int32_t&& l,
            std::string&& s,
            double&& d,
            bool&& b,
            char&& c);
    Simple& operator= (const Simple& x);
    Simple& operator= (Simple&& x);

    void o (const uint8_t& _o);
    void o (uint8_t&& _o);
    const uint8_t& o (void) const;
    uint8_t& o (void);

    void l (const int32_t& _l);
    void l (int32_t&& _l);
    const int32_t& l (void) const;
    int32_t& l (void);

    void s (const std::string& _s);
    void s (std::string&& _s);
    const std::string& s (void) const;
    std::string& s (void);

    void d (const double& _d);
    void d (double&& _d);
    const double& d (void) const;
    double& d (void);

    void b (const bool& _b);
    void b (bool&& _b);
    const bool& b (void) const;
    bool& b (void);

    void c (const char& _c);
    void c (char&& _c);
    const char& c (void) const;
    char& c (void);

    void swap (Simple& s);

  private:
    uint8_t o_;
    int32_t l_;
    std::string s_;
    double d_;
    bool b_;
    char c_;
  }; // Simple

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
  #if !defined (_INTF_TEST_FOO_FWD_)
  #define _INTF_TEST_FOO_FWD_
  class Foo_stub;
  template <typename T> class Foo_ref;
  namespace stub_types_
  {
    typedef Foo_ref <Foo_stub> Foo;
  };
  using stub_types_::Foo;

  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
  #endif // !_INTF_TEST_FOO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Foo_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Foo_ref <Foo_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    bool pass_struct (const Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    Test::Simple return_struct (void);

    // generated from c++/cli_hdr/operation.erb
    bool get_struct (Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    bool update_struct (Test::Simple& s);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Foo_stub (Foo_proxy_ptr p);
  protected:
    static Foo_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Foo_stub (void) = delete;
    Foo_stub(const Foo_stub&) = delete;
    Foo_stub& operator=(const Foo_stub&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Foo_ref
    : public virtual corba_0x::CORBA::Object_ref<T>
  {
  public:
    explicit Foo_ref (T *s = 0);
    Foo_ref (const Foo_ref<T>& o);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    void operator=(std::nullptr_t t);
    static Foo narrow(corba_0x::CORBA::Object obj);
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (Test::Simple& m1, Test::Simple& m2)
  {
    m1.swap (m2);
  }
}; // std

#include "TestC.inl"

#if defined (__TAO_0X_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

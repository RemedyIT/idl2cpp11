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
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++/cli_hdr/struct_pre.erb
  class Simple final
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    inline Simple (void);
    ~Simple (void) = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    explicit inline Simple (uint8_t o,
                     int32_t l,
                     std::string s,
                     double d,
                     bool b,
                     char c);
    inline Simple& operator= (const Simple& x);
    inline Simple& operator= (Simple&& x);

    inline void o (uint8_t _o);
    inline uint8_t o (void) const;
    inline uint8_t& o (void);

    inline void l (int32_t _l);
    inline int32_t l (void) const;
    inline int32_t& l (void);

    inline void s (const std::string& _s);
    inline void s (std::string&& _s);
    inline const std::string& s (void) const;
    inline std::string& s (void);

    inline void d (double _d);
    inline double d (void) const;
    inline double& d (void);

    inline void b (bool _b);
    inline bool b (void) const;
    inline bool& b (void);

    inline void c (char _c);
    inline char c (void) const;
    inline char& c (void);

    inline void swap (Simple& s);

  private:
    uint8_t o_;
    int32_t l_;
    std::string s_;
    double d_;
    bool b_;
    char c_;
  };// Simple
  typedef Simple Simple_idl_t; // IDL traits typename

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < Simple> SimpleSeq;
  struct SimpleSeq_idl_t {}; // IDL traits type-id

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < int32_t> LongSeq;
  struct LongSeq_idl_t {}; // IDL traits type-id

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < int32_t> BoundedLongSeq;
  struct BoundedLongSeq_idl_t {}; // IDL traits type-id

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < bool> BoolSeq;
  struct BoolSeq_idl_t {}; // IDL traits type-id

  // generated from c++/cli_hdr/typedef.erb
  typedef std::vector < std::string> StringSeq;
  struct StringSeq_idl_t {}; // IDL traits type-id

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  typedef Foo Foo_idl_t; // IDL traits typename
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
    object_traits< ::Test::Foo>::ref_type
    object_traits< ::Test::Foo>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  };

  namespace IDL
  {
    template<>
    struct traits < ::Test::Foo> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Foo>>,
      public CORBA::object_traits < ::Test::Foo>
    {
      static constexpr bool local = false;
      static constexpr bool abstract = false;
    };
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
    /// @copybrief Test::Foo::test_long_seq
    virtual ::Test::LongSeq test_long_seq (const ::Test::LongSeq& sin,
                                   ::Test::LongSeq& sinout,
                                   ::Test::LongSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::test_bool_seq
    virtual ::Test::BoolSeq test_bool_seq (const ::Test::BoolSeq& sin,
                                   ::Test::BoolSeq& sinout,
                                   ::Test::BoolSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::test_string_seq
    virtual ::Test::StringSeq test_string_seq (const ::Test::StringSeq& sin,
                                       ::Test::StringSeq& sinout,
                                       ::Test::StringSeq& sout);

    // generated from c++/cli_hdr/operation.erb
    /// @copybrief Test::Foo::test_struct_seq
    virtual ::Test::SimpleSeq test_struct_seq (const ::Test::SimpleSeq& sin,
                                       ::Test::SimpleSeq& sinout,
                                       ::Test::SimpleSeq& sout);

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


// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace IDL {

    // generated from c++/cli_hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_SIMPLE_TRAITS_)
#define _STRUCT_TEST_SIMPLE_TRAITS_
    template<>
    struct traits < ::Test::Simple_idl_t>
      : IDL::common_traits< ::Test::Simple>
    {
    };
#endif // _STRUCT_TEST_SIMPLE_TRAITS_

    // generated from c++/cli_hdr/sequence_idl_traits.erb
    template<>
    struct traits < ::Test::SimpleSeq_idl_t>
      : IDL::unbounded_traits< ::Test::SimpleSeq>,
        IDL::alias_traits< ::Test::SimpleSeq_idl_t,
                           ::Test::SimpleSeq>
    {
      typedef ::Test::Simple&   element_cdr_to;
      typedef const ::Test::Simple&  element_cdr_from;

      typedef IDL::traits< ::Test::Simple_idl_t>  element_traits;
    };

    // generated from c++/cli_hdr/sequence_idl_traits.erb
    template<>
    struct traits < ::Test::LongSeq_idl_t>
      : IDL::unbounded_traits< ::Test::LongSeq>,
        IDL::alias_traits< ::Test::LongSeq_idl_t,
                           ::Test::LongSeq>
    {
      typedef int32_t&   element_cdr_to;
      typedef int32_t  element_cdr_from;

      typedef IDL::traits< ::int32_t_idl_t>  element_traits;
    };

    // generated from c++/cli_hdr/sequence_idl_traits.erb
    template<>
    struct traits < ::Test::BoundedLongSeq_idl_t>
      : IDL::bounded_traits< ::Test::BoundedLongSeq,
                             50U>,
        IDL::alias_traits< ::Test::BoundedLongSeq_idl_t,
                           ::Test::BoundedLongSeq>
    {
      typedef int32_t&   element_cdr_to;
      typedef int32_t  element_cdr_from;

      typedef IDL::traits< ::int32_t_idl_t>  element_traits;
    };

    // generated from c++/cli_hdr/sequence_idl_traits.erb
    template<>
    struct traits < ::Test::BoolSeq_idl_t>
      : IDL::unbounded_traits< ::Test::BoolSeq>,
        IDL::alias_traits< ::Test::BoolSeq_idl_t,
                           ::Test::BoolSeq>
    {
      typedef bool&   element_cdr_to;
      typedef bool  element_cdr_from;

      typedef IDL::traits< ::bool_idl_t>  element_traits;
    };

    // generated from c++/cli_hdr/sequence_idl_traits.erb
    template<>
    struct traits < ::Test::StringSeq_idl_t>
      : IDL::unbounded_traits< ::Test::StringSeq>,
        IDL::alias_traits< ::Test::StringSeq_idl_t,
                           ::Test::StringSeq>
    {
      typedef std::string&   element_cdr_to;
      typedef const std::string&  element_cdr_from;

      typedef IDL::traits< ::std::string_idl_t>  element_traits;
    };
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
}; // std

// generated from c++/cli_inl/struct_inl.erb
inline Test::Simple::Simple ()
           : o_ (0)
           , l_ (0)
           , s_ (std::string())
           , d_ (0.0)
           , b_ (false)
           , c_ ('\0')
{
}
inline Test::Simple::Simple (uint8_t o,
                             int32_t l,
                             std::string s,
                             double d,
                             bool b,
                             char c)
           : o_ (std::move (o))
           , l_ (std::move (l))
           , s_ (std::move (s))
           , d_ (std::move (d))
           , b_ (std::move (b))
           , c_ (std::move (c))
{
}

inline void Test::Simple::o (uint8_t _o) { this->o_ = _o; }
inline uint8_t Test::Simple::o (void) const { return this->o_; }
inline uint8_t& Test::Simple::o (void) { return this->o_; }

inline void Test::Simple::l (int32_t _l) { this->l_ = _l; }
inline int32_t Test::Simple::l (void) const { return this->l_; }
inline int32_t& Test::Simple::l (void) { return this->l_; }

inline void Test::Simple::s (const std::string& _s) { this->s_ = _s; }
inline void Test::Simple::s (std::string&& _s) { this->s_ = std::move (_s); }
inline const std::string& Test::Simple::s (void) const { return this->s_; }
inline std::string& Test::Simple::s (void) { return this->s_; }

inline void Test::Simple::d (double _d) { this->d_ = _d; }
inline double Test::Simple::d (void) const { return this->d_; }
inline double& Test::Simple::d (void) { return this->d_; }

inline void Test::Simple::b (bool _b) { this->b_ = _b; }
inline bool Test::Simple::b (void) const { return this->b_; }
inline bool& Test::Simple::b (void) { return this->b_; }

inline void Test::Simple::c (char _c) { this->c_ = _c; }
inline char Test::Simple::c (void) const { return this->c_; }
inline char& Test::Simple::c (void) { return this->c_; }

inline ::Test::Simple& Test::Simple::operator= (const ::Test::Simple& x)
{
  if (this != &x) {
    this->o_ = x.o_;
    this->l_ = x.l_;
    this->s_ = x.s_;
    this->d_ = x.d_;
    this->b_ = x.b_;
    this->c_ = x.c_;
  }
  return *this;
}
inline ::Test::Simple& Test::Simple::operator= (::Test::Simple&& x)
{
  this->o_ = std::move (x.o_);
  this->l_ = std::move (x.l_);
  this->s_ = std::move (x.s_);
  this->d_ = std::move (x.d_);
  this->b_ = std::move (x.b_);
  this->c_ = std::move (x.c_);
  return *this;
}

inline void Test::Simple::swap (::Test::Simple& s)
{
  std::swap (this->o_, s.o_);
  std::swap (this->l_, s.l_);
  std::swap (this->s_, s.s_);
  std::swap (this->d_, s.d_);
  std::swap (this->b_, s.b_);
  std::swap (this->c_, s.c_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

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

/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_DBCFEAEB_INCLUDED__
#define __RIDL_TESTC_H_DBCFEAEB_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 9 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.9.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/struct_pre
  /// @copydoc test.idl::Test::Variable
  class Variable
  {
  public:
    // generated from c++11/templates/cli/hdr/struct_post
    Variable () = default;
    ~Variable () = default;
    Variable (const Variable&) = default;
    Variable (Variable&&) = default;
    /// Constructor which accepts value for all members
    explicit inline Variable (
      std::string name);
    Variable& operator= (const Variable&) = default;
    Variable& operator= (Variable&&) = default;

    /// @copydoc test.idl::Test::Variable::name
    //@{
    inline void name (const std::string& _x11_name) { this->name_ = _x11_name; }
    inline void name (std::string&& _x11_name) { this->name_ = std::move (_x11_name); }
    inline const std::string& name () const { return this->name_; }
    inline std::string& name () { return this->name_; }
    //@}

    /// Exchange the value of two structures in an efficient matter
    inline void swap (Variable& s);

  private:
    std::string name_{};
  };// Variable

  inline void swap (::Test::Variable& m1, ::Test::Variable& m2) { m1.swap (m2); }


  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd
#if !defined (_INTF_TEST__BAR_FWD_)
#define _INTF_TEST__BAR_FWD_
  class Bar;
  class Bar_proxy;
  using Bar_proxy_ptr = Bar_proxy*;
#endif // !_INTF_TEST__BAR_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits
#if !defined (_INTF_TEST__BAR_TRAITS_DECL_)
#define _INTF_TEST__BAR_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits<::Test::Bar>::shared_ptr_type
    object_traits<::Test::Bar>::lock_shared (::Test::Bar* p);
    template<>
    object_traits<::Test::Bar>::ref_type
    object_traits<::Test::Bar>::narrow (object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits <::Test::Bar> :
      public IDL::common_byval_traits <CORBA::object_reference <::Test::Bar>>,
      public CORBA::object_traits <::Test::Bar>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      using is_local = std::false_type;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      using is_abstract = std::false_type;

      template <typename OStrm_, typename Formatter = formatter<::Test::Bar, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };
  } // namespace IDL
} // namespace TAOX11_NAMESPACE
#endif // !_INTF_TEST__BAR_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre
  /// @copydoc test.idl::Test::Bar
  class Bar
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    using _traits_type = TAOX11_IDL::traits<Bar>;
    /// Strong reference type
    using _ref_type = TAOX11_IDL::traits<Bar>::ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Bar::op
    virtual void
    op ();

    // generated from c++11/templates/cli/hdr/interface_post
  protected:
    using _shared_ptr_type = std::shared_ptr<Bar>;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Bar (Bar_proxy_ptr p, bool inherited = false);
    /// Default constructor
    Bar () = default;
    /// Destructor
    ~Bar () override = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Bar(const Bar&) = delete;
    Bar(Bar&&) = delete;
    Bar& operator=(const Bar&) = delete;
    Bar& operator=(Bar&&) = delete;
    //@}
    Bar_proxy_ptr bar_proxy_ {};
  }; // class Bar

  // generated from c++11/templates/cli/hdr/struct_pre
  /// @copydoc test.idl::Test::Simple
  class Simple
  {
  public:
    // generated from c++11/templates/cli/hdr/struct_post
    Simple () = default;
    ~Simple () = default;
    Simple (const Simple&) = default;
    Simple (Simple&&) = default;
    /// Constructor which accepts value for all members
    explicit inline Simple (
      uint8_t o,
      int32_t l,
      std::string s,
      double d,
      bool b,
      char c,
      IDL::traits<::Test::Bar>::ref_type bar_ref,
      ::Test::Variable v);
    Simple& operator= (const Simple&) = default;
    Simple& operator= (Simple&&) = default;

    /// @copydoc test.idl::Test::Simple::o
    //@{
    inline void o (uint8_t _x11_o) { this->o_ = _x11_o; }
    inline uint8_t o () const { return this->o_; }
    inline uint8_t& o () { return this->o_; }
    //@}

    /// @copydoc test.idl::Test::Simple::l
    //@{
    inline void l (int32_t _x11_l) { this->l_ = _x11_l; }
    inline int32_t l () const { return this->l_; }
    inline int32_t& l () { return this->l_; }
    //@}

    /// @copydoc test.idl::Test::Simple::s
    //@{
    inline void s (const std::string& _x11_s) { this->s_ = _x11_s; }
    inline void s (std::string&& _x11_s) { this->s_ = std::move (_x11_s); }
    inline const std::string& s () const { return this->s_; }
    inline std::string& s () { return this->s_; }
    //@}

    /// @copydoc test.idl::Test::Simple::d
    //@{
    inline void d (double _x11_d) { this->d_ = _x11_d; }
    inline double d () const { return this->d_; }
    inline double& d () { return this->d_; }
    //@}

    /// @copydoc test.idl::Test::Simple::b
    //@{
    inline void b (bool _x11_b) { this->b_ = _x11_b; }
    inline bool b () const { return this->b_; }
    inline bool& b () { return this->b_; }
    //@}

    /// @copydoc test.idl::Test::Simple::c
    //@{
    inline void c (char _x11_c) { this->c_ = _x11_c; }
    inline char c () const { return this->c_; }
    inline char& c () { return this->c_; }
    //@}

    /// @copydoc test.idl::Test::Simple::bar_ref
    //@{
    inline void bar_ref (IDL::traits<::Test::Bar>::ref_type _x11_bar_ref) { this->bar_ref_ = _x11_bar_ref; }
    inline IDL::traits<::Test::Bar>::ref_type bar_ref () const { return this->bar_ref_; }
    inline IDL::traits<::Test::Bar>::ref_type& bar_ref () { return this->bar_ref_; }
    //@}

    /// @copydoc test.idl::Test::Simple::v
    //@{
    inline void v (const ::Test::Variable& _x11_v) { this->v_ = _x11_v; }
    inline void v (::Test::Variable&& _x11_v) { this->v_ = std::move (_x11_v); }
    inline const ::Test::Variable& v () const { return this->v_; }
    inline ::Test::Variable& v () { return this->v_; }
    //@}

    /// Exchange the value of two structures in an efficient matter
    inline void swap (Simple& s);

  private:
    uint8_t o_{};
    int32_t l_{};
    std::string s_{};
    double d_{};
    bool b_{};
    char c_{};
    IDL::traits<::Test::Bar>::ref_type bar_ref_{};
    ::Test::Variable v_{};
  };// Simple

  inline void swap (::Test::Simple& m1, ::Test::Simple& m2) { m1.swap (m2); }


  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd
#if !defined (_INTF_TEST__FOO_FWD_)
#define _INTF_TEST__FOO_FWD_
  class Foo;
  class Foo_proxy;
  using Foo_proxy_ptr = Foo_proxy*;
#endif // !_INTF_TEST__FOO_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits
#if !defined (_INTF_TEST__FOO_TRAITS_DECL_)
#define _INTF_TEST__FOO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits<::Test::Foo>::shared_ptr_type
    object_traits<::Test::Foo>::lock_shared (::Test::Foo* p);
    template<>
    object_traits<::Test::Foo>::ref_type
    object_traits<::Test::Foo>::narrow (object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits <::Test::Foo> :
      public IDL::common_byval_traits <CORBA::object_reference <::Test::Foo>>,
      public CORBA::object_traits <::Test::Foo>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      using is_local = std::false_type;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      using is_abstract = std::false_type;

      template <typename OStrm_, typename Formatter = formatter<::Test::Foo, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };
  } // namespace IDL
} // namespace TAOX11_NAMESPACE
#endif // !_INTF_TEST__FOO_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre
  /// @copydoc test.idl::Test::Foo
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    using _traits_type = TAOX11_IDL::traits<Foo>;
    /// Strong reference type
    using _ref_type = TAOX11_IDL::traits<Foo>::ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::pass_struct
    virtual bool
    pass_struct (
        const ::Test::Simple& s);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::return_struct
    virtual ::Test::Simple
    return_struct ();

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::get_struct
    virtual bool
    get_struct (
        ::Test::Simple& s);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::update_struct
    virtual bool
    update_struct (
        ::Test::Simple& s);

    // generated from c++11/templates/cli/hdr/operation
    /// @copydoc test.idl::Test::Foo::shutdown
    virtual void
    shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post
  protected:
    using _shared_ptr_type = std::shared_ptr<Foo>;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p, bool inherited = false);
    /// Default constructor
    Foo () = default;
    /// Destructor
    ~Foo () override = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    //@}
    Foo_proxy_ptr foo_proxy_ {};
  }; // class Foo
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_TEST__VARIABLE_TRAITS_)
#define _STRUCT_TEST__VARIABLE_TRAITS_
    template<>
    struct traits <::Test::Variable>
      : IDL::common_traits<::Test::Variable>
    {
      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(OStrm_& os_, in_type val_, Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };

    template <typename OStrm_>
    struct formatter<::Test::Variable, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::Test::Variable>::__Writer<Fmt>);
#endif // _STRUCT_TEST__VARIABLE_TRAITS_

    // generated from c++11/templates/cli/hdr/interface_idl_traits
#if !defined (_INTF_FMT_TEST__BAR_TRAITS_DECL_)
#define _INTF_FMT_TEST__BAR_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter<::Test::Bar, OStrm_>
    {
      OStrm_& operator ()(OStrm_& , IDL::traits<::Test::Bar>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::Test::Bar>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST__BAR_TRAITS_DECL_

    // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_TEST__SIMPLE_TRAITS_)
#define _STRUCT_TEST__SIMPLE_TRAITS_
    template<>
    struct traits <::Test::Simple>
      : IDL::common_traits<::Test::Simple>
    {
      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(OStrm_& os_, in_type val_, Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };

    template <typename OStrm_>
    struct formatter<::Test::Simple, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::Test::Simple>::__Writer<Fmt>);
#endif // _STRUCT_TEST__SIMPLE_TRAITS_

    // generated from c++11/templates/cli/hdr/interface_idl_traits
#if !defined (_INTF_FMT_TEST__FOO_TRAITS_DECL_)
#define _INTF_FMT_TEST__FOO_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter<::Test::Foo, OStrm_>
    {
      OStrm_& operator ()(OStrm_& , IDL::traits<::Test::Foo>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::Test::Foo>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST__FOO_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def
    template <typename OStrm_>
    struct formatter<::Test::Variable, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::Variable& val_)
      {
        os_ << "Test::Variable"
            << '{'
            << "name=" << IDL::traits<std::string>::write(val_.name ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Test::Variable>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::Variable>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::Variable, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::Variable>::write_on (os, w.val_, formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def
    template <typename OStrm_>
    inline OStrm_&
    formatter<::Test::Bar, OStrm_>::operator ()(OStrm_& os_, IDL::traits<::Test::Bar>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (std::move (val_), "Test::Bar");
      return os_;
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Test::Bar>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::Bar>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::Bar, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::Bar>::write_on (os, w.val_, formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def
    template <typename OStrm_>
    struct formatter<::Test::Simple, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::Simple& val_)
      {
        os_ << "Test::Simple"
            << '{'
            << "o=" << IDL::traits<uint8_t>::write(val_.o ())
            << ",l=" << IDL::traits<int32_t>::write(val_.l ())
            << ",s=" << IDL::traits<std::string>::write(val_.s ())
            << ",d=" << IDL::traits<double>::write(val_.d ())
            << ",b=" << IDL::traits<bool>::write(val_.b ())
            << ",c=" << IDL::traits<char>::write(val_.c ())
            << ",bar_ref=" << IDL::traits<::Test::Bar>::write(val_.bar_ref ())
            << ",v=" << IDL::traits<::Test::Variable>::write(val_.v ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Test::Simple>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::Simple>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::Simple, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::Simple>::write_on (os, w.val_, formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def
    template <typename OStrm_>
    inline OStrm_&
    formatter<::Test::Foo, OStrm_>::operator ()(OStrm_& os_, IDL::traits<::Test::Foo>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (std::move (val_), "Test::Foo");
      return os_;
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Test::Foo>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::Foo>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::Foo, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::Foo>::write_on (os, w.val_, formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/inl/struct_inl
inline ::Test::Variable::Variable (
  std::string name)
  : name_ (std::move (name))
{
}

inline void ::Test::Variable::swap (::Test::Variable& s)
{
  std::swap (this->name_, s.name_);
}

// generated from c++11/templates/cli/inl/struct_inl
inline ::Test::Simple::Simple (
  uint8_t o,
  int32_t l,
  std::string s,
  double d,
  bool b,
  char c,
  IDL::traits<::Test::Bar>::ref_type bar_ref,
  ::Test::Variable v)
  : o_ (std::move (o))
  , l_ (std::move (l))
  , s_ (std::move (s))
  , d_ (std::move (d))
  , b_ (std::move (b))
  , c_ (std::move (c))
  , bar_ref_ (std::move (bar_ref))
  , v_ (std::move (v))
{
}

inline void ::Test::Simple::swap (::Test::Simple& s)
{
  std::swap (this->o_, s.o_);
  std::swap (this->l_, s.l_);
  std::swap (this->s_, s.s_);
  std::swap (this->d_, s.d_);
  std::swap (this->b_, s.b_);
  std::swap (this->c_, s.c_);
  std::swap (this->bar_ref_, s.bar_ref_);
  std::swap (this->v_, s.v_);
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::Test::Variable& _v)
{
  return IDL::traits<::Test::Variable>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/interface_os
inline std::ostream& operator<< (std::ostream& strm, IDL::traits<::Test::Bar>::ref_type _v)
{
  return IDL::traits<::Test::Bar>::write_on (strm, std::move(_v));
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::Test::Simple& _v)
{
  return IDL::traits<::Test::Simple>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/interface_os
inline std::ostream& operator<< (std::ostream& strm, IDL::traits<::Test::Foo>::ref_type _v)
{
  return IDL::traits<::Test::Foo>::write_on (strm, std::move(_v));
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_DBCFEAEB_INCLUDED__ */

// -*- END -*-

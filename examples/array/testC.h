/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_JCDFEBFB_INCLUDED__
#define __RIDL_TESTC_H_JCDFEBFB_INCLUDED__

#pragma once

#include /**/ "tao/x11/base/pre.h"
#include "tao/x11/base/stddef.h"
#include "tao/x11/base/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/object_ostream.h"

#include /**/ "tao/x11/base/versionx11.h"

#if TAOX11_MAJOR_VERSION != 2 || TAOX11_MINOR_VERSION != 6 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (2.6.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::F
  using F = std::array<float, 10>;

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::V
  using V = std::array<std::string, 10>;

  // generated from c++11/templates/cli/hdr/typedef
  /// @copydoc test.idl::Test::M
  using M = std::array<std::array<std::array<std::string, 3>, 2>, 1>;

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
    /// @copydoc test.idl::Test::Foo::op
    virtual void
    op (
        const ::Test::F& p1,
        ::Test::V& p2,
        ::Test::M& p3);

    // generated from c++11/templates/cli/hdr/interface_post
  protected:
    using _shared_ptr_type = std::shared_ptr<Foo>;

    template <typename _Tp1, typename, typename ...Args>
    friend constexpr TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

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
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/array_idl_traits
  // Unaliased type : std::array<float, 10>
  // MD5            : 9B852471F9CE9C1C304DBFD80016C456
#if !defined(_ALIAS_9B852471F9CE9C1C304DBFD80016C456_TRAITS_DECL_)
#define _ALIAS_9B852471F9CE9C1C304DBFD80016C456_TRAITS_DECL_

  template<>
  struct traits <::Test::F>
    : IDL::common_traits<::Test::F>
  {
    /// IDL::traits<> for the element of the array
    using element_traits = IDL::traits<float>;
    /// std::integral_constant type of value_type uint32_t
    /// indicating the number of dimensions of the array
    using dimensions = std::integral_constant<uint32_t, 1>;

    template <typename OStrm_,
              typename Formatter = formatter<::Test::F, OStrm_>>
    static inline OStrm_& write_on(
        OStrm_& os_, in_type val_,
        Formatter fmt_ = Formatter ())
    {
      return fmt_ (os_, val_);
    }

    template <typename Formatter = std::false_type>
    static inline __Writer<Formatter> write (in_type val) { return {val}; }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(
      OStrm_& os,
      IDL::traits<::Test::F>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::Test::F>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::Test::F, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::Test::F>::write_on (os, w.val_, formatter_t ());
  }

#endif

  // generated from c++11/templates/cli/hdr/array_idl_traits
  // Unaliased type : std::array<std::string, 10>
  // MD5            : 77FA1CD3AE97AF829A10387AFE81B9D8
#if !defined(_ALIAS_77FA1CD3AE97AF829A10387AFE81B9D8_TRAITS_DECL_)
#define _ALIAS_77FA1CD3AE97AF829A10387AFE81B9D8_TRAITS_DECL_

  template<>
  struct traits <::Test::V>
    : IDL::common_traits<::Test::V>
  {
    /// IDL::traits<> for the element of the array
    using element_traits = IDL::traits<std::string>;
    /// std::integral_constant type of value_type uint32_t
    /// indicating the number of dimensions of the array
    using dimensions = std::integral_constant<uint32_t, 1>;

    template <typename OStrm_,
              typename Formatter = formatter<::Test::V, OStrm_>>
    static inline OStrm_& write_on(
        OStrm_& os_, in_type val_,
        Formatter fmt_ = Formatter ())
    {
      return fmt_ (os_, val_);
    }

    template <typename Formatter = std::false_type>
    static inline __Writer<Formatter> write (in_type val) { return {val}; }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(
      OStrm_& os,
      IDL::traits<::Test::V>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::Test::V>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::Test::V, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::Test::V>::write_on (os, w.val_, formatter_t ());
  }

#endif

  // generated from c++11/templates/cli/hdr/array_idl_traits
  // Unaliased type : std::array<std::array<std::array<std::string, 3>, 2>, 1>
  // MD5            : 5C019818C1D7360ACAE8413C97B8326C
#if !defined(_ALIAS_5C019818C1D7360ACAE8413C97B8326C_TRAITS_DECL_)
#define _ALIAS_5C019818C1D7360ACAE8413C97B8326C_TRAITS_DECL_

  template<>
  struct traits <::Test::M>
    : IDL::common_traits<::Test::M>
  {
    /// IDL::traits<> for the element of the array
    using element_traits = IDL::traits<std::string>;
    /// std::integral_constant type of value_type uint32_t
    /// indicating the number of dimensions of the array
    using dimensions = std::integral_constant<uint32_t, 3>;

    template <typename OStrm_,
              typename Formatter = formatter<::Test::M, OStrm_>>
    static inline OStrm_& write_on(
        OStrm_& os_, in_type val_,
        Formatter fmt_ = Formatter ())
    {
      return fmt_ (os_, val_);
    }

    template <typename Formatter = std::false_type>
    static inline __Writer<Formatter> write (in_type val) { return {val}; }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(
      OStrm_& os,
      IDL::traits<::Test::M>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::Test::M>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::Test::M, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::Test::M>::write_on (os, w.val_, formatter_t ());
  }

#endif

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
} // namespace TAOX11_NAMESPACE::IDL

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

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
} // namespace TAOX11_NAMESPACE::IDL

// generated from c++11/templates/cli/hdr/array_os
// Unaliased type : std::array<float, 10>
// MD5            : 9B852471F9CE9C1C304DBFD80016C456
#if !defined (_ALIAS_OSTREAM_9B852471F9CE9C1C304DBFD80016C456_DECL_)
#define _ALIAS_OSTREAM_9B852471F9CE9C1C304DBFD80016C456_DECL_

inline std::ostream& operator<< (std::ostream& strm, const ::Test::F& _v)
{
  return IDL::traits<::Test::F>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_9B852471F9CE9C1C304DBFD80016C456_DECL_

// generated from c++11/templates/cli/hdr/array_os
// Unaliased type : std::array<std::string, 10>
// MD5            : 77FA1CD3AE97AF829A10387AFE81B9D8
#if !defined (_ALIAS_OSTREAM_77FA1CD3AE97AF829A10387AFE81B9D8_DECL_)
#define _ALIAS_OSTREAM_77FA1CD3AE97AF829A10387AFE81B9D8_DECL_

inline std::ostream& operator<< (std::ostream& strm, const ::Test::V& _v)
{
  return IDL::traits<::Test::V>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_77FA1CD3AE97AF829A10387AFE81B9D8_DECL_

// generated from c++11/templates/cli/hdr/array_os
// Unaliased type : std::array<std::array<std::array<std::string, 3>, 2>, 1>
// MD5            : 5C019818C1D7360ACAE8413C97B8326C
#if !defined (_ALIAS_OSTREAM_5C019818C1D7360ACAE8413C97B8326C_DECL_)
#define _ALIAS_OSTREAM_5C019818C1D7360ACAE8413C97B8326C_DECL_

inline std::ostream& operator<< (std::ostream& strm, const ::Test::M& _v)
{
  return IDL::traits<::Test::M>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_5C019818C1D7360ACAE8413C97B8326C_DECL_

// generated from c++11/templates/cli/hdr/interface_os
inline std::ostream& operator<< (std::ostream& strm, IDL::traits<::Test::Foo>::ref_type _v)
{
  return IDL::traits<::Test::Foo>::write_on (strm, std::move(_v));
}

// generated from c++11/templates/cli/hdr/post
#if !defined (TAOX11_DISABLE_INCLUDE_STUB_PROXY_HDR) && defined (__TAOX11_INCLUDE_STUB_PROXY__) && __has_include("testCP.h")
# include "testCP.h"
#endif

#include /**/ "tao/x11/base/post.h"

#endif /* __RIDL_TESTC_H_JCDFEBFB_INCLUDED__ */

// -*- END -*-

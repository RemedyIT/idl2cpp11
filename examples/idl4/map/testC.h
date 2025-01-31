/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_EBHACCHA_INCLUDED__
#define __RIDL_TESTC_H_EBHACCHA_INCLUDED__

#pragma once

#include /**/ "tao/x11/base/pre.h"
#include "tao/x11/base/stddef.h"
#include "tao/x11/base/basic_traits.h"
#include "tao/x11/corba.h"
#include "map"

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
  /// @copydoc test.idl::Test::StringLongMap
  using StringLongMap = std::map<std::string, int32_t>;
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/map_idl_traits
  // Unaliased type : std::map<std::string, int32_t>
  // MD5            : 9591659AF1C35F72B6270EE9C6D3AFEF
#if !defined(_ALIAS_9591659AF1C35F72B6270EE9C6D3AFEF_TRAITS_DECL_)
#define _ALIAS_9591659AF1C35F72B6270EE9C6D3AFEF_TRAITS_DECL_

  template<>
  struct traits <::Test::StringLongMap>
    : IDL::common_traits<::Test::StringLongMap>
  {
    /// std::false_type or std::true_type type indicating whether
    /// this sequence is declared as bounded
    using is_bounded = std::false_type;
    /// IDL::traits<> for the key type of the sequence
    using key_traits = IDL::traits<std::string>;
    /// IDL::traits<> for the value type of the sequence
    using value_traits = IDL::traits<int32_t>;

    template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
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
      IDL::traits<::Test::StringLongMap>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::Test::StringLongMap>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::Test::StringLongMap, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::Test::StringLongMap>::write_on (os, w.val_, formatter_t ());
  }

#endif
} // namespace TAOX11_NAMESPACE::IDL

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{
} // namespace TAOX11_NAMESPACE::IDL

// generated from c++11/templates/cli/hdr/map_os
// Unaliased type : std::map<std::string, int32_t>
// MD5            : 9591659AF1C35F72B6270EE9C6D3AFEF
#if !defined (_ALIAS_OSTREAM_9591659AF1C35F72B6270EE9C6D3AFEF_DECL_)
#define _ALIAS_OSTREAM_9591659AF1C35F72B6270EE9C6D3AFEF_DECL_

inline std::ostream& operator<< (std::ostream& strm, const ::Test::StringLongMap& _v)
{
  return IDL::traits<::Test::StringLongMap>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_9591659AF1C35F72B6270EE9C6D3AFEF_DECL_

// generated from c++11/templates/cli/hdr/post
#if !defined (TAOX11_DISABLE_INCLUDE_STUB_PROXY_HDR) && defined (__TAOX11_INCLUDE_STUB_PROXY__) && __has_include("testCP.h")
# include "testCP.h"
#endif

#include /**/ "tao/x11/base/post.h"

#endif /* __RIDL_TESTC_H_EBHACCHA_INCLUDED__ */

// -*- END -*-

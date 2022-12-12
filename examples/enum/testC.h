/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_DDDEACGH_INCLUDED__
#define __RIDL_TESTC_H_DDDEACGH_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 8 || TAOX11_MICRO_VERSION != 1
#error This file was generated with another RIDL C++11 backend version (1.8.1). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/enum

  /// @copydoc test.idl::Test::EEnum
  enum class EEnum : uint32_t
  {
    /// @copydoc test.idl::Test::EEnum::A
    A,
    /// @copydoc test.idl::Test::EEnum::B
    B,
    /// @copydoc test.idl::Test::EEnum::C
    C
  };// EEnum


  // generated from StubHeaderWriter#visit_const
  /// @copydoc test.idl::Test::my_enum
  constexpr EEnum my_enum = EEnum::A;
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/enum_idl_traits
    template<>
    struct traits <::Test::EEnum>
      : IDL::common_byval_traits<::Test::EEnum>
    {
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

    template <typename OStrm_>
    struct formatter<::Test::EEnum, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          ::Test::EEnum val_)
      {
        switch (val_)
        {
          case ::Test::EEnum::A: os_ << "Test::EEnum::A"; break;
          case ::Test::EEnum::B: os_ << "Test::EEnum::B"; break;
          case ::Test::EEnum::C: os_ << "Test::EEnum::C"; break;
        }
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits<::Test::EEnum>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::Test::EEnum>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::Test::EEnum, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::Test::EEnum>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/hdr/enum_os
inline std::ostream& operator<< (
    std::ostream& strm,
    ::Test::EEnum _v)
{
  return IDL::traits<::Test::EEnum>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_DDDEACGH_INCLUDED__ */

// -*- END -*-

// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_BAGAJIEA_INCLUDED__
#define __RIDL_TESTC_H_BAGAJIEA_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.3.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
namespace Test
{

  // generated from c++11/templates/cli/hdr/enum.erb

  /// @copydoc Test::EEnum
  enum class EEnum : uint32_t
  {
    A,
    B,
    C
  };// EEnum


  // generated from StubHeaderWriter#visit_const
  constexpr EEnum my_enum = EEnum::A;
}; // namespace Test


// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/enum_idl_traits.erb
    template<>
    struct traits < ::Test::EEnum>
      : IDL::common_traits< ::Test::EEnum>
    {
    };
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++11/templates/cli/hdr/enum_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    ::Test::EEnum _enumerator)
{
  switch (_enumerator) {
    case Test::EEnum::A: return strm << "Test::EEnum::A"; break;
    case Test::EEnum::B: return strm << "Test::EEnum::B"; break;
    case Test::EEnum::C: return strm << "Test::EEnum::C"; break;
    default: return strm;
  }
}

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif // __RIDL_TESTC_H_BAGAJIEA_INCLUDED__

// -*- END -*-

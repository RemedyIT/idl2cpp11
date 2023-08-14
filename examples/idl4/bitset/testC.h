/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_JJGDEIBE_INCLUDED__
#define __RIDL_TESTC_H_JJGDEIBE_INCLUDED__

#pragma once

#include /**/ "ace/pre.h"
#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 9 || TAOX11_MICRO_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.9.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from c++11/templates/cli/hdr/bitset
/// @copydoc test.idl::MyBitset
/// THIS MAPPING IS NOT COMPLETE
struct MyBitset
{
  /// @copydoc #{doc_scoped_name}::#{_bitfield.name}
  bool x : 1;
  /// @copydoc #{doc_scoped_name}::#{_bitfield.name}
  int8_t a : 3;
  /// @copydoc #{doc_scoped_name}::#{_bitfield.name}
  int16_t d : 12;
  /// @copydoc #{doc_scoped_name}::#{_bitfield.name}
  int64_t tt : 33;
}; // MyBitset


// generated from c++11/templates/cli/hdr/bitset
/// @copydoc test.idl::MyBitset2
/// THIS MAPPING IS NOT COMPLETE
struct MyBitset2
{
  /// @copydoc #{doc_scoped_name}::#{_bitfield.name}
  int8_t c : 3;
  /// @copydoc #{doc_scoped_name}::#{_bitfield.name}
  int8_t  : 2;
}; // MyBitset2


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_JJGDEIBE_INCLUDED__ */

// -*- END -*-

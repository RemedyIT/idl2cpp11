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

using namespace TAOX11_NAMESPACE;

// generated from c++/cli_hdr/typedef.erb
typedef std::vector < uint8_t> octetseq;

// generated from c++/cli_hdr/struct_pre.erb
class RadarTrack
{
public:

  // generated from c++/cli_hdr/struct_post.erb
  RadarTrack (void);
  ~RadarTrack (void) = default;
  RadarTrack (const RadarTrack&) = default;
  RadarTrack (RadarTrack&&) = default;
  explicit RadarTrack (std::string id,
                       int32_t x,
                       int32_t y,
                       int32_t z,
                       ::octetseq plot);
  RadarTrack& operator= (const RadarTrack& x);
  RadarTrack& operator= (RadarTrack&& x);

  void id (const std::string& _id);
  void id (std::string&& _id);
  const std::string& id (void) const;
  std::string& id (void);

  void x (int32_t _x);
  int32_t x (void) const;
  int32_t& x (void);

  void y (int32_t _y);
  int32_t y (void) const;
  int32_t& y (void);

  void z (int32_t _z);
  int32_t z (void) const;
  int32_t& z (void);

  void plot (const ::octetseq& _plot);
  void plot (::octetseq&& _plot);
  const ::octetseq& plot (void) const;
  ::octetseq& plot (void);

  void swap (RadarTrack& s);

private:
  std::string id_;
  int32_t x_;
  int32_t y_;
  int32_t z_;
  ::octetseq plot_;
}; // RadarTrack

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  void swap (::RadarTrack& m1, ::RadarTrack& m2);
}; // std

// generated from c++/cli_hdr/inline.erb
#include "testC.inl"

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (::RadarTrack& m1, ::RadarTrack& m2)
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
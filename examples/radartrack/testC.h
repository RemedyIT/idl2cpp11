// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_IDAGFECG_INCLUDED__
#define __RIDL_TESTC_H_IDAGFECG_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/sequence_os_t.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.3.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from c++11/templates/cli/hdr/typedef.erb
/// @copydoc octetseq
typedef std::vector < uint8_t> octetseq;

// generated from c++11/templates/cli/hdr/struct_pre.erb

/// @copydoc RadarTrack
class RadarTrack
{
public:

  // generated from c++11/templates/cli/hdr/struct_post.erb
  inline RadarTrack ();
  ~RadarTrack () = default;
  RadarTrack (const RadarTrack&) = default;
  RadarTrack (RadarTrack&&) = default;
  explicit inline RadarTrack (std::string id,
                       int32_t x,
                       int32_t y,
                       int32_t z,
                       ::octetseq plot);
  inline RadarTrack& operator= (const RadarTrack& x);
  inline RadarTrack& operator= (RadarTrack&& x);

  /// @copydoc RadarTrack::id
  //@{
  inline void id (const std::string& _id);
  inline void id (std::string&& _id);
  inline const std::string& id () const;
  inline std::string& id ();
  //@}

  /// @copydoc RadarTrack::x
  //@{
  inline void x (int32_t _x);
  inline int32_t x () const;
  inline int32_t& x ();
  //@}

  /// @copydoc RadarTrack::y
  //@{
  inline void y (int32_t _y);
  inline int32_t y () const;
  inline int32_t& y ();
  //@}

  /// @copydoc RadarTrack::z
  //@{
  inline void z (int32_t _z);
  inline int32_t z () const;
  inline int32_t& z ();
  //@}

  /// @copydoc RadarTrack::plot
  //@{
  inline void plot (const ::octetseq& _plot);
  inline void plot (::octetseq&& _plot);
  inline const ::octetseq& plot () const;
  inline ::octetseq& plot ();
  //@}

  inline void swap (RadarTrack& s);

private:
  std::string id_;
  int32_t x_;
  int32_t y_;
  int32_t z_;
  ::octetseq plot_;
};// RadarTrack

// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < uint8_t>
    // MD5            : 4A0D4FA0CECD59978705BEC31A31D5CB
#if !defined(_ALIAS_4A0D4FA0CECD59978705BEC31A31D5CB_TRAITS_DECL_)
#define _ALIAS_4A0D4FA0CECD59978705BEC31A31D5CB_TRAITS_DECL_

    template<>
    struct traits < ::octetseq>
      : IDL::common_traits< ::octetseq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      typedef std::false_type is_bounded;
      /// IDL::traits<> for the element of the sequence
      typedef IDL::traits< uint8_t> element_traits;
    };

#endif

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_RADARTRACK_TRAITS_)
#define _STRUCT_RADARTRACK_TRAITS_
    template<>
    struct traits < ::RadarTrack>
      : IDL::common_traits< ::RadarTrack>
    {
    };
#endif // _STRUCT_RADARTRACK_TRAITS_
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::RadarTrack& m1, ::RadarTrack& m2);
}; // std

// generated from c++11/templates/cli/inl/struct_inl.erb
inline RadarTrack::RadarTrack ()
           : id_ (std::string())
           , x_ (0)
           , y_ (0)
           , z_ (0)
           , plot_ (std::vector < uint8_t> ())
{
}
inline RadarTrack::RadarTrack (std::string id,
                               int32_t x,
                               int32_t y,
                               int32_t z,
                               ::octetseq plot)
           : id_ (std::move (id))
           , x_ (std::move (x))
           , y_ (std::move (y))
           , z_ (std::move (z))
           , plot_ (std::move (plot))
{
}

inline void RadarTrack::id (const std::string& _id) { this->id_ = _id; }
inline void RadarTrack::id (std::string&& _id) { this->id_ = std::move (_id); }
inline const std::string& RadarTrack::id () const { return this->id_; }
inline std::string& RadarTrack::id () { return this->id_; }

inline void RadarTrack::x (int32_t _x) { this->x_ = _x; }
inline int32_t RadarTrack::x () const { return this->x_; }
inline int32_t& RadarTrack::x () { return this->x_; }

inline void RadarTrack::y (int32_t _y) { this->y_ = _y; }
inline int32_t RadarTrack::y () const { return this->y_; }
inline int32_t& RadarTrack::y () { return this->y_; }

inline void RadarTrack::z (int32_t _z) { this->z_ = _z; }
inline int32_t RadarTrack::z () const { return this->z_; }
inline int32_t& RadarTrack::z () { return this->z_; }

inline void RadarTrack::plot (const ::octetseq& _plot) { this->plot_ = _plot; }
inline void RadarTrack::plot (::octetseq&& _plot) { this->plot_ = std::move (_plot); }
inline const ::octetseq& RadarTrack::plot () const { return this->plot_; }
inline ::octetseq& RadarTrack::plot () { return this->plot_; }

inline ::RadarTrack& RadarTrack::operator= (const ::RadarTrack& x)
{
  if (this != &x) {
    this->id_ = x.id_;
    this->x_ = x.x_;
    this->y_ = x.y_;
    this->z_ = x.z_;
    this->plot_ = x.plot_;
  }
  return *this;
}

inline ::RadarTrack& RadarTrack::operator= (::RadarTrack&& x)
{
  this->id_ = std::move (x.id_);
  this->x_ = std::move (x.x_);
  this->y_ = std::move (x.y_);
  this->z_ = std::move (x.z_);
  this->plot_ = std::move (x.plot_);
  return *this;
}

inline void RadarTrack::swap (::RadarTrack& s)
{
  std::swap (this->id_, s.id_);
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
  std::swap (this->z_, s.z_);
  std::swap (this->plot_, s.plot_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  inline void swap (::RadarTrack& m1, ::RadarTrack& m2)
  {
    m1.swap (m2);
  }
}; // std

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < uint8_t>
// MD5            : 4A0D4FA0CECD59978705BEC31A31D5CB
#if !defined (_ALIAS_OSTREAM_4A0D4FA0CECD59978705BEC31A31D5CB_DECL_)
#define _ALIAS_OSTREAM_4A0D4FA0CECD59978705BEC31A31D5CB_DECL_

std::ostream&
taox11_print_octetseq (
    std::ostream& strm ,
    const ::octetseq& _v);

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::octetseq& _v)
{
  strm << "std::vector < uint8_t>";
  return taox11_print_sequence (strm, _v);
}

#endif // _ALIAS_OSTREAM_4A0D4FA0CECD59978705BEC31A31D5CB_DECL_

// generated from c++11/templates/cli/hdr/struct_os.erb
std::ostream&
operator<< (
    std::ostream &,
    const ::RadarTrack&);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_IDAGFECG_INCLUDED__ */

// -*- END -*-

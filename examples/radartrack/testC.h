/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_ICEJGDDC_INCLUDED__
#define __RIDL_TESTC_H_ICEJGDDC_INCLUDED__

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

// generated from c++11/templates/cli/hdr/typedef
/// @copydoc test.idl::octetseq
using octetseq = std::vector<uint8_t>;

// generated from c++11/templates/cli/hdr/struct_pre
/// @copydoc test.idl::RadarTrack
class RadarTrack
{
public:
  // generated from c++11/templates/cli/hdr/struct_post
  RadarTrack () = default;
  ~RadarTrack () = default;
  RadarTrack (const RadarTrack&) = default;
  RadarTrack (RadarTrack&&) = default;
  /// Constructor which accepts value for all members
  explicit inline RadarTrack (
    std::string id,
    int32_t x,
    int32_t y,
    int32_t z,
    ::octetseq plot);
  RadarTrack& operator= (const RadarTrack&) = default;
  RadarTrack& operator= (RadarTrack&&) = default;

  /// @copydoc test.idl::RadarTrack::id
  //@{
  inline void id (const std::string& _x11_id) { this->id_ = _x11_id; }
  inline void id (std::string&& _x11_id) { this->id_ = std::move (_x11_id); }
  inline const std::string& id () const { return this->id_; }
  inline std::string& id () { return this->id_; }
  //@}

  /// @copydoc test.idl::RadarTrack::x
  //@{
  inline void x (int32_t _x11_x) { this->x_ = _x11_x; }
  inline int32_t x () const { return this->x_; }
  inline int32_t& x () { return this->x_; }
  //@}

  /// @copydoc test.idl::RadarTrack::y
  //@{
  inline void y (int32_t _x11_y) { this->y_ = _x11_y; }
  inline int32_t y () const { return this->y_; }
  inline int32_t& y () { return this->y_; }
  //@}

  /// @copydoc test.idl::RadarTrack::z
  //@{
  inline void z (int32_t _x11_z) { this->z_ = _x11_z; }
  inline int32_t z () const { return this->z_; }
  inline int32_t& z () { return this->z_; }
  //@}

  /// @copydoc test.idl::RadarTrack::plot
  //@{
  inline void plot (const ::octetseq& _x11_plot) { this->plot_ = _x11_plot; }
  inline void plot (::octetseq&& _x11_plot) { this->plot_ = std::move (_x11_plot); }
  inline const ::octetseq& plot () const { return this->plot_; }
  inline ::octetseq& plot () { return this->plot_; }
  //@}

  /// Exchange the value of two structures in an efficient matter
  inline void swap (RadarTrack& s);

private:
  std::string id_{};
  int32_t x_{};
  int32_t y_{};
  int32_t z_{};
  ::octetseq plot_{};
};// RadarTrack

inline void swap (::RadarTrack& m1, ::RadarTrack& m2) { m1.swap (m2); }


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : std::vector<uint8_t>
    // MD5            : 6520B07304360E5662D6ED9C7AC59F00
#if !defined(_ALIAS_6520B07304360E5662D6ED9C7AC59F00_TRAITS_DECL_)
#define _ALIAS_6520B07304360E5662D6ED9C7AC59F00_TRAITS_DECL_

    template<>
    struct traits <::octetseq>
      : IDL::common_traits<::octetseq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::false_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits<uint8_t>;

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
        IDL::traits<::octetseq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::octetseq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::octetseq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::octetseq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_RADARTRACK_TRAITS_)
#define _STRUCT_RADARTRACK_TRAITS_
    template<>
    struct traits <::RadarTrack>
      : IDL::common_traits<::RadarTrack>
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
    struct formatter<::RadarTrack, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(OStrm_&, IDL::traits<::RadarTrack>::__Writer<Fmt>);
#endif // _STRUCT_RADARTRACK_TRAITS_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def
    template <typename OStrm_>
    struct formatter<::RadarTrack, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::RadarTrack& val_)
      {
        os_ << "RadarTrack"
            << '{'
            << "id=" << IDL::traits<std::string>::write(val_.id ())
            << ",x=" << IDL::traits<int32_t>::write(val_.x ())
            << ",y=" << IDL::traits<int32_t>::write(val_.y ())
            << ",z=" << IDL::traits<int32_t>::write(val_.z ())
            << ",plot=" << IDL::traits<::octetseq>::write(val_.plot ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(OStrm_& os, IDL::traits<::RadarTrack>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits<::RadarTrack>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter<::RadarTrack, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits<::RadarTrack>::write_on (os, w.val_, formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/inl/struct_inl
inline ::RadarTrack::RadarTrack (
  std::string id,
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

inline void ::RadarTrack::swap (::RadarTrack& s)
{
  std::swap (this->id_, s.id_);
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
  std::swap (this->z_, s.z_);
  std::swap (this->plot_, s.plot_);
}

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : std::vector<uint8_t>
// MD5            : 6520B07304360E5662D6ED9C7AC59F00
#if !defined (_ALIAS_OSTREAM_6520B07304360E5662D6ED9C7AC59F00_DECL_)
#define _ALIAS_OSTREAM_6520B07304360E5662D6ED9C7AC59F00_DECL_

inline std::ostream& operator<< (std::ostream& strm, const ::octetseq& _v)
{
  return IDL::traits<::octetseq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_6520B07304360E5662D6ED9C7AC59F00_DECL_

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::RadarTrack& _v)
{
  return IDL::traits<::RadarTrack>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_ICEJGDDC_INCLUDED__ */

// -*- END -*-

// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Westervoort, GLD
 *        The Netherlands
 *        http://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_GGADGGDC_INCLUDED__
#define __RIDL_TESTC_H_GGADGGDC_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 5 || TAOX11_BETA_VERSION != 2
#error This file was generated with another RIDL C++11 backend version (1.5.2). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from c++11/templates/cli/hdr/typedef.erb
/// @copydoc test.idl::octetseq
typedef std::vector < uint8_t> octetseq;

// generated from c++11/templates/cli/hdr/struct_pre.erb

/// @copydoc test.idl::RadarTrack
class RadarTrack
{
public:

  // generated from c++11/templates/cli/hdr/struct_post.erb
  /// Default constructor
  RadarTrack () = default;
  /// Destructor
  ~RadarTrack () = default;
  /// Copy constructor
  RadarTrack (const RadarTrack&) = default;
  /// Move constructor
  RadarTrack (RadarTrack&&) = default;
  /// Constructor which accepts value for all members
  explicit inline RadarTrack (
    std::string id,
    int32_t x,
    int32_t y,
    int32_t z,
    ::octetseq plot);
  /// Copy assignment operator
  RadarTrack& operator= (const RadarTrack&) = default;
  /// Move assignment operator
  RadarTrack& operator= (RadarTrack&&) = default;

  /// @copydoc test.idl::RadarTrack::id
  //@{
  inline void id (const std::string& _x11_id);
  inline void id (std::string&& _x11_id);
  inline const std::string& id () const;
  inline std::string& id ();
  //@}

  /// @copydoc test.idl::RadarTrack::x
  //@{
  inline void x (int32_t _x11_x);
  inline int32_t x () const;
  inline int32_t& x ();
  //@}

  /// @copydoc test.idl::RadarTrack::y
  //@{
  inline void y (int32_t _x11_y);
  inline int32_t y () const;
  inline int32_t& y ();
  //@}

  /// @copydoc test.idl::RadarTrack::z
  //@{
  inline void z (int32_t _x11_z);
  inline int32_t z () const;
  inline int32_t& z ();
  //@}

  /// @copydoc test.idl::RadarTrack::plot
  //@{
  inline void plot (const ::octetseq& _x11_plot);
  inline void plot (::octetseq&& _x11_plot);
  inline const ::octetseq& plot () const;
  inline ::octetseq& plot ();
  //@}

  /// Exchange the value of two structs in an efficient matter
  inline void swap (RadarTrack& s);

private:
  std::string id_;
  int32_t x_ {};
  int32_t y_ {};
  int32_t z_ {};
  ::octetseq plot_;
};// RadarTrack

// generated from StubHeaderIDLTraitsWriter#pre_visit
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
        IDL::traits< ::octetseq>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::octetseq>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::octetseq, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::octetseq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_RADARTRACK_TRAITS_)
#define _STRUCT_RADARTRACK_TRAITS_
    template<>
    struct traits < ::RadarTrack>
      : IDL::common_traits< ::RadarTrack>
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
    struct formatter< ::RadarTrack, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::RadarTrack>::__Writer<Fmt>);
#endif // _STRUCT_RADARTRACK_TRAITS_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def.erb
    template <typename OStrm_>
    struct formatter< ::RadarTrack, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::RadarTrack& val_)
      {
        os_ << "RadarTrack"
            << '{'
            << "id=" << IDL::traits< std::string>::write(val_.id ())
            << ",x=" << IDL::traits< int32_t>::write(val_.x ())
            << ",y=" << IDL::traits< int32_t>::write(val_.y ())
            << ",z=" << IDL::traits< int32_t>::write(val_.z ())
            << ",plot=" << IDL::traits< ::octetseq>::write(val_.plot ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::RadarTrack>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::RadarTrack>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::RadarTrack, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::RadarTrack>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::RadarTrack& m1, ::RadarTrack& m2);
} // namespace std

// generated from c++11/templates/cli/inl/struct_inl.erb
inline RadarTrack::RadarTrack (
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

inline void RadarTrack::id (const std::string& _x11_id) { this->id_ = _x11_id; }
inline void RadarTrack::id (std::string&& _x11_id) { this->id_ = std::move (_x11_id); }
inline const std::string& RadarTrack::id () const { return this->id_; }
inline std::string& RadarTrack::id () { return this->id_; }

inline void RadarTrack::x (int32_t _x11_x) { this->x_ = _x11_x; }
inline int32_t RadarTrack::x () const { return this->x_; }
inline int32_t& RadarTrack::x () { return this->x_; }

inline void RadarTrack::y (int32_t _x11_y) { this->y_ = _x11_y; }
inline int32_t RadarTrack::y () const { return this->y_; }
inline int32_t& RadarTrack::y () { return this->y_; }

inline void RadarTrack::z (int32_t _x11_z) { this->z_ = _x11_z; }
inline int32_t RadarTrack::z () const { return this->z_; }
inline int32_t& RadarTrack::z () { return this->z_; }

inline void RadarTrack::plot (const ::octetseq& _x11_plot) { this->plot_ = _x11_plot; }
inline void RadarTrack::plot (::octetseq&& _x11_plot) { this->plot_ = std::move (_x11_plot); }
inline const ::octetseq& RadarTrack::plot () const { return this->plot_; }
inline ::octetseq& RadarTrack::plot () { return this->plot_; }

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
} // namespace std

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < uint8_t>
// MD5            : 4A0D4FA0CECD59978705BEC31A31D5CB
#if !defined (_ALIAS_OSTREAM_4A0D4FA0CECD59978705BEC31A31D5CB_DECL_)
#define _ALIAS_OSTREAM_4A0D4FA0CECD59978705BEC31A31D5CB_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::octetseq& _v)
{
  return IDL::traits< ::octetseq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_4A0D4FA0CECD59978705BEC31A31D5CB_DECL_

// generated from c++11/templates/cli/hdr/struct_os.erb
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::RadarTrack& _v)
{
  return IDL::traits< ::RadarTrack>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_GGADGGDC_INCLUDED__ */

// -*- END -*-

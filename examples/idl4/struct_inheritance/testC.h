/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_CGFEIHBA_INCLUDED__
#define __RIDL_TESTC_H_CGFEIHBA_INCLUDED__

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

// generated from c++11/templates/cli/hdr/struct_pre
/// @copydoc test.idl::Point2D
class Point2D
{
public:
  // generated from c++11/templates/cli/hdr/struct_post
  Point2D () = default;
  ~Point2D () = default;
  Point2D (const Point2D&) = default;
  Point2D (Point2D&&) = default;
  /// Constructor which accepts value for all members
  explicit inline Point2D (
    int32_t x,
    int32_t y);
  Point2D& operator= (const Point2D&) = default;
  Point2D& operator= (Point2D&&) = default;

  /// @copydoc test.idl::Point2D::x
  //@{
  inline void x (int32_t _x11_x) { this->x_ = _x11_x; }
  inline int32_t x () const { return this->x_; }
  inline int32_t& x () { return this->x_; }
  //@}

  /// @copydoc test.idl::Point2D::y
  //@{
  inline void y (int32_t _x11_y) { this->y_ = _x11_y; }
  inline int32_t y () const { return this->y_; }
  inline int32_t& y () { return this->y_; }
  //@}

  /// Exchange the value of two structures in an efficient matter
  inline void swap (Point2D& s);

private:
  int32_t x_{};
  int32_t y_{};
};// Point2D

inline void swap (::Point2D& m1, ::Point2D& m2) { m1.swap (m2); }


// generated from c++11/templates/cli/hdr/struct_pre
/// @copydoc test.idl::Point3D
class Point3D : public Point2D
{
public:
  // generated from c++11/templates/cli/hdr/struct_post
  Point3D () = default;
  ~Point3D () = default;
  using Point2D::Point2D;
  Point3D (const Point3D&) = default;
  Point3D (Point3D&&) = default;
  /// Constructor which accepts value for all members
  explicit inline Point3D (
    Point2D _base,
    int32_t z);
  Point3D& operator= (const Point3D&) = default;
  Point3D& operator= (Point3D&&) = default;

  /// @copydoc test.idl::Point3D::z
  //@{
  inline void z (int32_t _x11_z) { this->z_ = _x11_z; }
  inline int32_t z () const { return this->z_; }
  inline int32_t& z () { return this->z_; }
  //@}

  /// Exchange the value of two structures in an efficient matter
  inline void swap (Point3D& s);

private:
  int32_t z_{};
};// Point3D

inline void swap (::Point3D& m1, ::Point3D& m2) { m1.swap (m2); }


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_POINT2D_TRAITS_)
#define _STRUCT_POINT2D_TRAITS_
  template<>
  struct traits <::Point2D>
    : IDL::common_traits<::Point2D>
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
  struct formatter<::Point2D, OStrm_>;

  template <typename OStrm_, typename Fmt>
  OStrm_& operator <<(OStrm_&, IDL::traits<::Point2D>::__Writer<Fmt>);
#endif // _STRUCT_POINT2D_TRAITS_

  // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_POINT3D_TRAITS_)
#define _STRUCT_POINT3D_TRAITS_
  template<>
  struct traits <::Point3D>
    : IDL::common_traits<::Point3D>
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
  struct formatter<::Point3D, OStrm_>;

  template <typename OStrm_, typename Fmt>
  OStrm_& operator <<(OStrm_&, IDL::traits<::Point3D>::__Writer<Fmt>);
#endif // _STRUCT_POINT3D_TRAITS_
} // namespace TAOX11_NAMESPACE::IDL

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE::IDL
{

  // generated from c++11/templates/cli/hdr/struct_idl_traits_def
  template <typename OStrm_>
  struct formatter<::Point2D, OStrm_>
  {
    inline OStrm_& operator ()(
        OStrm_& os_,
        const ::Point2D& val_)
    {
      os_ << "Point2D"
          << '{'
          << "x=" << IDL::traits<int32_t>::write(val_.x ())
          << ",y=" << IDL::traits<int32_t>::write(val_.y ())
          << '}';
      return os_;
    }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Point2D>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::Point2D>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::Point2D, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::Point2D>::write_on (os, w.val_, formatter_t ());
  }

  // generated from c++11/templates/cli/hdr/struct_idl_traits_def
  template <typename OStrm_>
  struct formatter<::Point3D, OStrm_>
  {
    inline OStrm_& operator ()(
        OStrm_& os_,
        const ::Point3D& val_)
    {
      os_ << "Point3D"
          << '{'
          << IDL::traits<Point2D>::write(val_) << ","
          << "z=" << IDL::traits<int32_t>::write(val_.z ())
          << '}';
      return os_;
    }
  };

  template <typename OStrm_, typename Fmt>
  inline OStrm_& operator <<(OStrm_& os, IDL::traits<::Point3D>::__Writer<Fmt> w)
  {
    using writer_t = IDL::traits<::Point3D>::__Writer<Fmt>;
    using formatter_t = typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter<::Point3D, OStrm_>,
                          typename writer_t::formatter_t>::type;
    return IDL::traits<::Point3D>::write_on (os, w.val_, formatter_t ());
  }
} // namespace TAOX11_NAMESPACE::IDL

// generated from c++11/templates/cli/inl/struct_inl
inline ::Point2D::Point2D (
  int32_t x,
  int32_t y)
  : x_ (std::move (x))
  , y_ (std::move (y))
{
}

inline void ::Point2D::swap (::Point2D& s)
{
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
}

// generated from c++11/templates/cli/inl/struct_inl
inline ::Point3D::Point3D (
  Point2D _base,
  int32_t z)
  : Point2D (std::move(_base))
  , z_ (std::move (z))
{
}

inline void ::Point3D::swap (::Point3D& s)
{
  std::swap (this->z_, s.z_);
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream& operator<< (std::ostream& strm, const ::Point2D& _v)
{
  return IDL::traits<::Point2D>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream& operator<< (std::ostream& strm, const ::Point3D& _v)
{
  return IDL::traits<::Point3D>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_CGFEIHBA_INCLUDED__ */

// -*- END -*-

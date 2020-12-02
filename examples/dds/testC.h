/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_ICABCGGH_INCLUDED__
#define __RIDL_TESTC_H_ICABCGGH_INCLUDED__

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

// generated from c++11/templates/cli/hdr/struct_pre

/// @copydoc test.idl::ShapeType
class ShapeType
{
public:

  // generated from c++11/templates/cli/hdr/struct_post
  /// Default constructor
  ShapeType () = default;
  /// Destructor
  ~ShapeType () = default;
  /// Copy constructor
  ShapeType (const ShapeType&) = default;
  /// Move constructor
  ShapeType (ShapeType&&) = default;
  /// Constructor which accepts value for all members
  explicit inline ShapeType (
    std::string color,
    int32_t x,
    int32_t y,
    int32_t shapesize);
  /// Copy assignment operator
  ShapeType& operator= (const ShapeType&) = default;
  /// Move assignment operator
  ShapeType& operator= (ShapeType&&) = default;

  /// @copydoc test.idl::ShapeType::color
  //@{
  inline void color (const std::string& _x11_color) { this->color_ = _x11_color; }
  inline void color (std::string&& _x11_color) { this->color_ = std::move (_x11_color); }
  inline const std::string& color () const { return this->color_; }
  inline std::string& color () { return this->color_; }
  //@}

  /// @copydoc test.idl::ShapeType::x
  //@{
  inline void x (int32_t _x11_x) { this->x_ = _x11_x; }
  inline int32_t x () const { return this->x_; }
  inline int32_t& x () { return this->x_; }
  //@}

  /// @copydoc test.idl::ShapeType::y
  //@{
  inline void y (int32_t _x11_y) { this->y_ = _x11_y; }
  inline int32_t y () const { return this->y_; }
  inline int32_t& y () { return this->y_; }
  //@}

  /// @copydoc test.idl::ShapeType::shapesize
  //@{
  inline void shapesize (int32_t _x11_shapesize) { this->shapesize_ = _x11_shapesize; }
  inline int32_t shapesize () const { return this->shapesize_; }
  inline int32_t& shapesize () { return this->shapesize_; }
  //@}

  /// Exchange the value of two structs in an efficient matter
  inline void swap (ShapeType& s);

private:
  std::string color_;
  int32_t x_ {};
  int32_t y_ {};
  int32_t shapesize_ {};
};// ShapeType

inline void swap (::ShapeType& m1, ::ShapeType& m2) { m1.swap (m2); }


// generated from c++11/templates/cli/hdr/struct_pre

/// @copydoc test.idl::Attributes
class Attributes
{
public:

  // generated from c++11/templates/cli/hdr/struct_post
  /// Default constructor
  Attributes () = default;
  /// Destructor
  ~Attributes () = default;
  /// Copy constructor
  Attributes (const Attributes&) = default;
  /// Move constructor
  Attributes (Attributes&&) = default;
  /// Constructor which accepts value for all members
  explicit inline Attributes (
    std::string shape,
    std::string color,
    float speed);
  /// Copy assignment operator
  Attributes& operator= (const Attributes&) = default;
  /// Move assignment operator
  Attributes& operator= (Attributes&&) = default;

  /// @copydoc test.idl::Attributes::shape
  //@{
  inline void shape (const std::string& _x11_shape) { this->shape_ = _x11_shape; }
  inline void shape (std::string&& _x11_shape) { this->shape_ = std::move (_x11_shape); }
  inline const std::string& shape () const { return this->shape_; }
  inline std::string& shape () { return this->shape_; }
  //@}

  /// @copydoc test.idl::Attributes::color
  //@{
  inline void color (const std::string& _x11_color) { this->color_ = _x11_color; }
  inline void color (std::string&& _x11_color) { this->color_ = std::move (_x11_color); }
  inline const std::string& color () const { return this->color_; }
  inline std::string& color () { return this->color_; }
  //@}

  /// @copydoc test.idl::Attributes::speed
  //@{
  inline void speed (float _x11_speed) { this->speed_ = _x11_speed; }
  inline float speed () const { return this->speed_; }
  inline float& speed () { return this->speed_; }
  //@}

  /// Exchange the value of two structs in an efficient matter
  inline void swap (Attributes& s);

private:
  std::string shape_;
  std::string color_;
  float speed_ {};
};// Attributes

inline void swap (::Attributes& m1, ::Attributes& m2) { m1.swap (m2); }


// generated from c++11/templates/cli/hdr/typedef
/// @copydoc test.idl::ShapeTypeSeq
using ShapeTypeSeq = std::vector< ::ShapeType>;

// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_SHAPETYPE_TRAITS_)
#define _STRUCT_SHAPETYPE_TRAITS_
    template<>
    struct traits < ::ShapeType>
      : IDL::common_traits< ::ShapeType>
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
    struct formatter< ::ShapeType, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::ShapeType>::__Writer<Fmt>);
#endif // _STRUCT_SHAPETYPE_TRAITS_

    // generated from c++11/templates/cli/hdr/struct_idl_traits
#if !defined (_STRUCT_ATTRIBUTES_TRAITS_)
#define _STRUCT_ATTRIBUTES_TRAITS_
    template<>
    struct traits < ::Attributes>
      : IDL::common_traits< ::Attributes>
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
    struct formatter< ::Attributes, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Attributes>::__Writer<Fmt>);
#endif // _STRUCT_ATTRIBUTES_TRAITS_

    // generated from c++11/templates/cli/hdr/sequence_idl_traits
    // Unaliased type : std::vector< ::ShapeType>
    // MD5            : AFA29D1C2FA960270DBBBC2006AE6A51
#if !defined(_ALIAS_AFA29D1C2FA960270DBBBC2006AE6A51_TRAITS_DECL_)
#define _ALIAS_AFA29D1C2FA960270DBBBC2006AE6A51_TRAITS_DECL_

    template<>
    struct traits < ::ShapeTypeSeq>
      : IDL::common_traits< ::ShapeTypeSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      using is_bounded = std::false_type;
      /// IDL::traits<> for the element of the sequence
      using element_traits = IDL::traits< ::ShapeType>;

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
        IDL::traits< ::ShapeTypeSeq>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits< ::ShapeTypeSeq>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter< ::ShapeTypeSeq, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits< ::ShapeTypeSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def
    template <typename OStrm_>
    struct formatter< ::ShapeType, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::ShapeType& val_)
      {
        os_ << "ShapeType"
            << '{'
            << "color=" << IDL::traits< std::string>::write(val_.color ())
            << ",x=" << IDL::traits< int32_t>::write(val_.x ())
            << ",y=" << IDL::traits< int32_t>::write(val_.y ())
            << ",shapesize=" << IDL::traits< int32_t>::write(val_.shapesize ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::ShapeType>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits< ::ShapeType>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter< ::ShapeType, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits< ::ShapeType>::write_on (
          os, w.val_,
          formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def
    template <typename OStrm_>
    struct formatter< ::Attributes, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Attributes& val_)
      {
        os_ << "Attributes"
            << '{'
            << "shape=" << IDL::traits< std::string>::write(val_.shape ())
            << ",color=" << IDL::traits< std::string>::write(val_.color ())
            << ",speed=" << IDL::traits< float>::write(val_.speed ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Attributes>::__Writer<Fmt> w)
    {
      using writer_t = IDL::traits< ::Attributes>::__Writer<Fmt>;
      using formatter_t = typename std::conditional<
                            std::is_same<
                              typename writer_t::formatter_t,
                              std::false_type>::value,
                            formatter< ::Attributes, OStrm_>,
                            typename writer_t::formatter_t>::type;
      return IDL::traits< ::Attributes>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/inl/struct_inl
inline ::ShapeType::ShapeType (
  std::string color,
  int32_t x,
  int32_t y,
  int32_t shapesize)
  : color_ (std::move (color))
  , x_ (std::move (x))
  , y_ (std::move (y))
  , shapesize_ (std::move (shapesize))
{
}

inline void ::ShapeType::swap (::ShapeType& s)
{
  std::swap (this->color_, s.color_);
  std::swap (this->x_, s.x_);
  std::swap (this->y_, s.y_);
  std::swap (this->shapesize_, s.shapesize_);
}

// generated from c++11/templates/cli/inl/struct_inl
inline ::Attributes::Attributes (
  std::string shape,
  std::string color,
  float speed)
  : shape_ (std::move (shape))
  , color_ (std::move (color))
  , speed_ (std::move (speed))
{
}

inline void ::Attributes::swap (::Attributes& s)
{
  std::swap (this->shape_, s.shape_);
  std::swap (this->color_, s.color_);
  std::swap (this->speed_, s.speed_);
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::ShapeType& _v)
{
  return IDL::traits< ::ShapeType>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/struct_os
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::Attributes& _v)
{
  return IDL::traits< ::Attributes>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/sequence_os
// Unaliased type : std::vector< ::ShapeType>
// MD5            : AFA29D1C2FA960270DBBBC2006AE6A51
#if !defined (_ALIAS_OSTREAM_AFA29D1C2FA960270DBBBC2006AE6A51_DECL_)
#define _ALIAS_OSTREAM_AFA29D1C2FA960270DBBBC2006AE6A51_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::ShapeTypeSeq& _v)
{
  return IDL::traits< ::ShapeTypeSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_AFA29D1C2FA960270DBBBC2006AE6A51_DECL_

// generated from c++11/templates/cli/hdr/post
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_ICABCGGH_INCLUDED__ */

// -*- END -*-

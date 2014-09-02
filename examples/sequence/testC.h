// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_HHEDIHAA_INCLUDED__
#define __RIDL_TESTC_H_HHEDIHAA_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/bounded_vector_t.h"
#include "tao/x11/bounded_type_traits_t.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 2
#error This file was generated with another RIDL C++11 backend version (1.3.2). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/struct_pre.erb

  /// @copydoc Test::Simple
  class Simple
  {
  public:

    // generated from c++11/templates/cli/hdr/struct_post.erb
    /// Default constructor
    Simple () = default;
    /// Destructor
    ~Simple () = default;
    /// Copy constructor
    Simple (const Simple&) = default;
    /// Move constructor
    Simple (Simple&&) = default;
    /// Constructor which accepts value for all members
    explicit inline Simple (
      uint8_t o,
      int32_t l,
      std::string s,
      double d,
      bool b,
      char c);
    /// Copy assignment operator
    Simple& operator= (const Simple&) = default;
    /// Move assignment operator
    Simple& operator= (Simple&&) = default;

    /// @copydoc Test::Simple::o
    //@{
    inline void o (uint8_t _o);
    inline uint8_t o () const;
    inline uint8_t& o ();
    //@}

    /// @copydoc Test::Simple::l
    //@{
    inline void l (int32_t _l);
    inline int32_t l () const;
    inline int32_t& l ();
    //@}

    /// @copydoc Test::Simple::s
    //@{
    inline void s (const std::string& _s);
    inline void s (std::string&& _s);
    inline const std::string& s () const;
    inline std::string& s ();
    //@}

    /// @copydoc Test::Simple::d
    //@{
    inline void d (double _d);
    inline double d () const;
    inline double& d ();
    //@}

    /// @copydoc Test::Simple::b
    //@{
    inline void b (bool _b);
    inline bool b () const;
    inline bool& b ();
    //@}

    /// @copydoc Test::Simple::c
    //@{
    inline void c (char _c);
    inline char c () const;
    inline char& c ();
    //@}

    /// Exchange the value of two structs in an efficient matter
    inline void swap (Simple& s);

  private:
    uint8_t o_ {};
    int32_t l_ {};
    std::string s_;
    double d_ {};
    bool b_ {};
    char c_ {};
  };// Simple

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::SimpleSeq
  typedef std::vector < Simple> SimpleSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::LongSeq
  typedef std::vector < int32_t> LongSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::BoundedLongSeq
  typedef TAOX11_NAMESPACE::IDL::bounded_vector < int32_t, 50> BoundedLongSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::BoolSeq
  typedef std::vector < bool> BoolSeq;

  // generated from c++11/templates/cli/hdr/typedef.erb
  /// @copydoc Test::StringSeq
  typedef std::vector < std::string> StringSeq;

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
#endif // !_INTF_TEST_FOO_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_FOO_TRAITS_DECL_)
#define _INTF_TEST_FOO_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Foo>::shared_ptr_type
    object_traits< ::Test::Foo>::lock_shared (
        ::Test::Foo* p);
    template<>
    const Object_proxy*
    object_traits< ::Test::Foo>::to_proxy (
        object_traits< ::Test::Foo>::ref_type);
    template<>
    object_traits< ::Test::Foo>::ref_type
    object_traits< ::Test::Foo>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits < ::Test::Foo> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Foo>>,
      public CORBA::object_traits < ::Test::Foo>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      typedef std::false_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;

      template <typename OStrm_, typename Formatter = formatter< ::Test::Foo, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };
  } // namespace IDL
} // namespace TAOX11_NAMESPACE
#endif // !_INTF_TEST_FOO_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  /// @copydoc Test::Foo
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Foo>           _traits_type;
    /// Strong reference type
    typedef TAOX11_IDL::traits< Foo>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::test_long_seq
    virtual
    ::Test::LongSeq
    test_long_seq (
        const ::Test::LongSeq& sin,
        ::Test::LongSeq& sinout,
        ::Test::LongSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::test_bool_seq
    virtual
    ::Test::BoolSeq
    test_bool_seq (
        const ::Test::BoolSeq& sin,
        ::Test::BoolSeq& sinout,
        ::Test::BoolSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::test_string_seq
    virtual
    ::Test::StringSeq
    test_string_seq (
        const ::Test::StringSeq& sin,
        ::Test::StringSeq& sinout,
        ::Test::StringSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::test_struct_seq
    virtual
    ::Test::SimpleSeq
    test_struct_seq (
        const ::Test::SimpleSeq& sin,
        ::Test::SimpleSeq& sinout,
        ::Test::SimpleSeq& sout);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::shutdown
    virtual
    void
    shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p);
    explicit Foo (Foo_proxy_ptr p, bool);
    /// Default constructor
    Foo () = default;
    /// Destructor
    ~Foo () = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    Foo_proxy_ptr foo_proxy_ {};
    //@}
  }; // Foo
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_SIMPLE_TRAITS_)
#define _STRUCT_TEST_SIMPLE_TRAITS_
    template<>
    struct traits < ::Test::Simple>
      : IDL::common_traits< ::Test::Simple>
    {
      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_>
    struct formatter< ::Test::Simple, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Simple>::__Writer<Fmt>);
#endif // _STRUCT_TEST_SIMPLE_TRAITS_

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < ::Test::Simple>
    // MD5            : 97E065F0B22B38AFDF68FAC50C0D18D3
#if !defined(_ALIAS_97E065F0B22B38AFDF68FAC50C0D18D3_TRAITS_DECL_)
#define _ALIAS_97E065F0B22B38AFDF68FAC50C0D18D3_TRAITS_DECL_

    template<>
    struct traits < ::Test::SimpleSeq>
      : IDL::common_traits< ::Test::SimpleSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      typedef std::false_type is_bounded;
      /// IDL::traits<> for the element of the sequence
      typedef IDL::traits< ::Test::Simple> element_traits;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::SimpleSeq>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::SimpleSeq>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::SimpleSeq, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::SimpleSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < int32_t>
    // MD5            : EF22CCD494B5C3FED94E904D67A99E15
#if !defined(_ALIAS_EF22CCD494B5C3FED94E904D67A99E15_TRAITS_DECL_)
#define _ALIAS_EF22CCD494B5C3FED94E904D67A99E15_TRAITS_DECL_

    template<>
    struct traits < ::Test::LongSeq>
      : IDL::common_traits< ::Test::LongSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      typedef std::false_type is_bounded;
      /// IDL::traits<> for the element of the sequence
      typedef IDL::traits< int32_t> element_traits;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::LongSeq>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::LongSeq>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::LongSeq, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::LongSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : TAOX11_NAMESPACE::IDL::bounded_vector < int32_t, 50>
    // MD5            : B6B4216D3D09E2026A1E9A0EC5A40C3E
#if !defined(_ALIAS_B6B4216D3D09E2026A1E9A0EC5A40C3E_TRAITS_DECL_)
#define _ALIAS_B6B4216D3D09E2026A1E9A0EC5A40C3E_TRAITS_DECL_

    template<>
    struct traits < ::Test::BoundedLongSeq>
      : IDL::common_traits< ::Test::BoundedLongSeq>
      , IDL::bounded_traits< ::Test::BoundedLongSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      typedef std::true_type is_bounded;
      /// IDL::traits<> for the element of the sequence
      typedef IDL::traits< int32_t> element_traits;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::BoundedLongSeq>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::BoundedLongSeq>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::BoundedLongSeq, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::BoundedLongSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < bool>
    // MD5            : 9234E6936FE22252495CDEA48F87A0D3
#if !defined(_ALIAS_9234E6936FE22252495CDEA48F87A0D3_TRAITS_DECL_)
#define _ALIAS_9234E6936FE22252495CDEA48F87A0D3_TRAITS_DECL_

    template<>
    struct traits < ::Test::BoolSeq>
      : IDL::common_traits< ::Test::BoolSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      typedef std::false_type is_bounded;
      /// IDL::traits<> for the element of the sequence
      typedef IDL::traits< bool> element_traits;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::BoolSeq>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::BoolSeq>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::BoolSeq, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::BoolSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/sequence_idl_traits.erb
    // Unaliased type : std::vector < std::string>
    // MD5            : E501B88938184788967D036078062640
#if !defined(_ALIAS_E501B88938184788967D036078062640_TRAITS_DECL_)
#define _ALIAS_E501B88938184788967D036078062640_TRAITS_DECL_

    template<>
    struct traits < ::Test::StringSeq>
      : IDL::common_traits< ::Test::StringSeq>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this sequence is declared as bounded
      typedef std::false_type is_bounded;
      /// IDL::traits<> for the element of the sequence
      typedef IDL::traits< std::string> element_traits;

      template <typename OStrm_, typename Formatter = formatter<value_type, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val} ; }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::StringSeq>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::StringSeq>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::StringSeq, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::StringSeq>::write_on (
          os, w.val_,
          formatter_t ());
    }

#endif

    // generated from c++11/templates/cli/hdr/interface_idl_traits.erb
#if !defined (_INTF_FMT_TEST_FOO_TRAITS_DECL_)
#define _INTF_FMT_TEST_FOO_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::Test::Foo, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          TAOX11_IDL::traits< ::Test::Foo>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Foo>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST_FOO_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def.erb
    template <typename OStrm_>
    struct formatter< ::Test::Simple, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::Simple& val_)
      {
        return os_ << "Test::Simple"
                   << '{'
                   << "o=" << IDL::traits< uint8_t>::write(val_.o ())
                   << ",l=" << IDL::traits< int32_t>::write(val_.l ())
                   << ",s=" << IDL::traits< std::string>::write(val_.s ())
                   << ",d=" << IDL::traits< double>::write(val_.d ())
                   << ",b=" << IDL::traits< bool>::write(val_.b ())
                   << ",c=" << IDL::traits< char>::write(val_.c ())
                   << '}';
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::Simple>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::Simple>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::Simple, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::Simple>::write_on (
          os, w.val_,
          formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def.erb
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::Test::Foo, OStrm_>::operator ()(
          OStrm_& os_,
          TAOX11_IDL::traits< ::Test::Foo>::ref_type val_)
    {
      return os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
                        val_,
                        "Test::Foo");
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::Foo>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::Foo>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::Foo, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::Foo>::write_on (
          os, w.val_,
          formatter_t ());
    }
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
} // namespace std

// generated from c++11/templates/cli/inl/struct_inl.erb
inline Test::Simple::Simple (
  uint8_t o,
  int32_t l,
  std::string s,
  double d,
  bool b,
  char c)
  : o_ (std::move (o))
  , l_ (std::move (l))
  , s_ (std::move (s))
  , d_ (std::move (d))
  , b_ (std::move (b))
  , c_ (std::move (c))
{
}

inline void Test::Simple::o (uint8_t _o) { this->o_ = _o; }
inline uint8_t Test::Simple::o () const { return this->o_; }
inline uint8_t& Test::Simple::o () { return this->o_; }

inline void Test::Simple::l (int32_t _l) { this->l_ = _l; }
inline int32_t Test::Simple::l () const { return this->l_; }
inline int32_t& Test::Simple::l () { return this->l_; }

inline void Test::Simple::s (const std::string& _s) { this->s_ = _s; }
inline void Test::Simple::s (std::string&& _s) { this->s_ = std::move (_s); }
inline const std::string& Test::Simple::s () const { return this->s_; }
inline std::string& Test::Simple::s () { return this->s_; }

inline void Test::Simple::d (double _d) { this->d_ = _d; }
inline double Test::Simple::d () const { return this->d_; }
inline double& Test::Simple::d () { return this->d_; }

inline void Test::Simple::b (bool _b) { this->b_ = _b; }
inline bool Test::Simple::b () const { return this->b_; }
inline bool& Test::Simple::b () { return this->b_; }

inline void Test::Simple::c (char _c) { this->c_ = _c; }
inline char Test::Simple::c () const { return this->c_; }
inline char& Test::Simple::c () { return this->c_; }

inline void Test::Simple::swap (::Test::Simple& s)
{
  std::swap (this->o_, s.o_);
  std::swap (this->l_, s.l_);
  std::swap (this->s_, s.s_);
  std::swap (this->d_, s.d_);
  std::swap (this->b_, s.b_);
  std::swap (this->c_, s.c_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  inline void swap (::Test::Simple& m1, ::Test::Simple& m2)
  {
    m1.swap (m2);
  }
} // namespace std

// generated from c++11/templates/cli/hdr/struct_os.erb
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::Test::Simple& _v)
{
  return IDL::traits< ::Test::Simple>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < ::Test::Simple>
// MD5            : 97E065F0B22B38AFDF68FAC50C0D18D3
#if !defined (_ALIAS_OSTREAM_97E065F0B22B38AFDF68FAC50C0D18D3_DECL_)
#define _ALIAS_OSTREAM_97E065F0B22B38AFDF68FAC50C0D18D3_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::SimpleSeq& _v)
{
  return IDL::traits< ::Test::SimpleSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_97E065F0B22B38AFDF68FAC50C0D18D3_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < int32_t>
// MD5            : EF22CCD494B5C3FED94E904D67A99E15
#if !defined (_ALIAS_OSTREAM_EF22CCD494B5C3FED94E904D67A99E15_DECL_)
#define _ALIAS_OSTREAM_EF22CCD494B5C3FED94E904D67A99E15_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::LongSeq& _v)
{
  return IDL::traits< ::Test::LongSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_EF22CCD494B5C3FED94E904D67A99E15_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : TAOX11_NAMESPACE::IDL::bounded_vector < int32_t, 50>
// MD5            : B6B4216D3D09E2026A1E9A0EC5A40C3E
#if !defined (_ALIAS_OSTREAM_B6B4216D3D09E2026A1E9A0EC5A40C3E_DECL_)
#define _ALIAS_OSTREAM_B6B4216D3D09E2026A1E9A0EC5A40C3E_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::BoundedLongSeq& _v)
{
  return IDL::traits< ::Test::BoundedLongSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_B6B4216D3D09E2026A1E9A0EC5A40C3E_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < bool>
// MD5            : 9234E6936FE22252495CDEA48F87A0D3
#if !defined (_ALIAS_OSTREAM_9234E6936FE22252495CDEA48F87A0D3_DECL_)
#define _ALIAS_OSTREAM_9234E6936FE22252495CDEA48F87A0D3_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::BoolSeq& _v)
{
  return IDL::traits< ::Test::BoolSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_9234E6936FE22252495CDEA48F87A0D3_DECL_

// generated from c++11/templates/cli/hdr/sequence_os.erb
// Unaliased type : std::vector < std::string>
// MD5            : E501B88938184788967D036078062640
#if !defined (_ALIAS_OSTREAM_E501B88938184788967D036078062640_DECL_)
#define _ALIAS_OSTREAM_E501B88938184788967D036078062640_DECL_

inline std::ostream& operator<< (
    std::ostream& strm,
    const ::Test::StringSeq& _v)
{
  return IDL::traits< ::Test::StringSeq>::write_on (strm, _v);
}

#endif // _ALIAS_OSTREAM_E501B88938184788967D036078062640_DECL_

// generated from c++11/templates/cli/hdr/interface_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::Test::Foo>::ref_type _v)
{
  return IDL::traits< ::Test::Foo>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_HHEDIHAA_INCLUDED__ */

// -*- END -*-

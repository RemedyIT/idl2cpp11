// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_CGJIACDA_INCLUDED__
#define __RIDL_TESTC_H_CGJIACDA_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 4 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.4.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/struct_pre.erb

  /// @copydoc Test::Variable
  class Variable
  {
  public:

    // generated from c++11/templates/cli/hdr/struct_post.erb
    /// Default constructor
    Variable () = default;
    /// Destructor
    ~Variable () = default;
    /// Copy constructor
    Variable (const Variable&) = default;
    /// Move constructor
    Variable (Variable&&) = default;
    /// Constructor which accepts value for all members
    explicit inline Variable (
      std::string name);
    /// Copy assignment operator
    Variable& operator= (const Variable&) = default;
    /// Move assignment operator
    Variable& operator= (Variable&&) = default;

    /// @copydoc Test::Variable::name
    //@{
    inline void name (const std::string& _name);
    inline void name (std::string&& _name);
    inline const std::string& name () const;
    inline std::string& name ();
    //@}

    /// Exchange the value of two structs in an efficient matter
    inline void swap (Variable& s);

  private:
    std::string name_;
  };// Variable

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_BAR_FWD_)
#define _INTF_TEST_BAR_FWD_
  class Bar;
  class Bar_proxy;
  typedef Bar_proxy* Bar_proxy_ptr;
#endif // !_INTF_TEST_BAR_FWD_
  // generated from Base::CodeWriter#at_global_scope
} // namespace Test
// entering Base::CodeWriter#at_global_scope

// generated from c++11/templates/cli/hdr/interface_object_traits.erb
#if !defined (_INTF_TEST_BAR_TRAITS_DECL_)
#define _INTF_TEST_BAR_TRAITS_DECL_
namespace TAOX11_NAMESPACE
{
  namespace CORBA
  {
    template<>
    object_traits< ::Test::Bar>::shared_ptr_type
    object_traits< ::Test::Bar>::lock_shared (
        ::Test::Bar* p);
    template<>
    const Object_proxy*
    object_traits< ::Test::Bar>::to_proxy (
        object_traits< ::Test::Bar>::ref_type);
    template<>
    object_traits< ::Test::Bar>::ref_type
    object_traits< ::Test::Bar>::narrow (
       object_traits<TAOX11_NAMESPACE::CORBA::Object>::ref_type);
  } // namespace CORBA

  namespace IDL
  {
    template<>
    struct traits < ::Test::Bar> :
      public IDL::common_byval_traits <CORBA::object_reference < ::Test::Bar>>,
      public CORBA::object_traits < ::Test::Bar>
    {
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as local
      typedef std::false_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;

      template <typename OStrm_, typename Formatter = formatter< ::Test::Bar, OStrm_>>
      static inline OStrm_& write_on(
          OStrm_& os_, in_type val_,
          Formatter fmt_ = Formatter ())
      {
        return fmt_ (os_, val_);
      }

      template <typename Formatter = std::false_type>
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };
  } // namespace IDL
} // namespace TAOX11_NAMESPACE
#endif // !_INTF_TEST_BAR_TRAITS_DECL_

// leaving Base::CodeWriter#at_global_scope
namespace Test
{

  // generated from c++11/templates/cli/hdr/interface_pre.erb
  /// @copydoc Test::Bar
  class Bar
    : public virtual TAOX11_NAMESPACE::CORBA::Object
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Bar>           _traits_type;
    /// Strong reference type
    typedef TAOX11_IDL::traits< Bar>::ref_type _ref_type;
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Bar::op
    virtual
    void
    op ();

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Bar>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Bar (Bar_proxy_ptr p);
    explicit Bar (Bar_proxy_ptr p, bool);
    /// Default constructor
    Bar () = default;
    /// Destructor
    ~Bar () = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Bar(const Bar&) = delete;
    Bar(Bar&&) = delete;
    Bar& operator=(const Bar&) = delete;
    Bar& operator=(Bar&&) = delete;
    Bar_proxy_ptr bar_proxy_ {};
    //@}
  }; // Bar

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
      char c,
      TAOX11_IDL::traits< ::Test::Bar>::ref_type bar_ref,
      ::Test::Variable v);
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

    /// @copydoc Test::Simple::bar_ref
    //@{
    inline void bar_ref (TAOX11_IDL::traits< ::Test::Bar>::ref_type _bar_ref);
    inline TAOX11_IDL::traits< ::Test::Bar>::ref_type bar_ref () const;
    inline TAOX11_IDL::traits< ::Test::Bar>::ref_type& bar_ref ();
    //@}

    /// @copydoc Test::Simple::v
    //@{
    inline void v (const ::Test::Variable& _v);
    inline void v (::Test::Variable&& _v);
    inline const ::Test::Variable& v () const;
    inline ::Test::Variable& v ();
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
    TAOX11_IDL::traits< ::Test::Bar>::ref_type bar_ref_;
    ::Test::Variable v_;
  };// Simple

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
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
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
    /// @copydoc Test::Foo::pass_struct
    virtual
    bool
    pass_struct (
        const ::Test::Simple& s);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::return_struct
    virtual
    ::Test::Simple
    return_struct ();

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::get_struct
    virtual
    bool
    get_struct (
        ::Test::Simple& s);

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::update_struct
    virtual
    bool
    update_struct (
        ::Test::Simple& s);

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
#if !defined (_STRUCT_TEST_VARIABLE_TRAITS_)
#define _STRUCT_TEST_VARIABLE_TRAITS_
    template<>
    struct traits < ::Test::Variable>
      : IDL::common_traits< ::Test::Variable>
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
    struct formatter< ::Test::Variable, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Variable>::__Writer<Fmt>);
#endif // _STRUCT_TEST_VARIABLE_TRAITS_

    // generated from c++11/templates/cli/hdr/interface_idl_traits.erb
#if !defined (_INTF_FMT_TEST_BAR_TRAITS_DECL_)
#define _INTF_FMT_TEST_BAR_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::Test::Bar, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          TAOX11_IDL::traits< ::Test::Bar>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Bar>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST_BAR_TRAITS_DECL_

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
      static inline __Writer<Formatter> write (in_type val) { return {val}; }
    };

    template <typename OStrm_>
    struct formatter< ::Test::Simple, OStrm_>;

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Simple>::__Writer<Fmt>);
#endif // _STRUCT_TEST_SIMPLE_TRAITS_

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
    struct formatter< ::Test::Variable, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::Variable& val_)
      {
        os_ << "Test::Variable"
            << '{'
            << "name=" << IDL::traits< std::string>::write(val_.name ())
            << '}';
        return os_;
      }
    };

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::Variable>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::Variable>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::Variable, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::Variable>::write_on (
          os, w.val_,
          formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def.erb
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::Test::Bar, OStrm_>::operator ()(
          OStrm_& os_,
          TAOX11_IDL::traits< ::Test::Bar>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
               val_,
               "Test::Bar");
      return os_;
    }

    template <typename OStrm_, typename Fmt>
    inline OStrm_& operator <<(
        OStrm_& os,
        IDL::traits< ::Test::Bar>::__Writer<Fmt> w)
    {
      typedef IDL::traits< ::Test::Bar>::__Writer<Fmt> writer_t;
      typedef typename std::conditional<
                          std::is_same<
                            typename writer_t::formatter_t,
                            std::false_type>::value,
                          formatter< ::Test::Bar, OStrm_>,
                          typename writer_t::formatter_t>::type formatter_t;
      return IDL::traits< ::Test::Bar>::write_on (
          os, w.val_,
          formatter_t ());
    }

    // generated from c++11/templates/cli/hdr/struct_idl_traits_def.erb
    template <typename OStrm_>
    struct formatter< ::Test::Simple, OStrm_>
    {
      inline OStrm_& operator ()(
          OStrm_& os_,
          const ::Test::Simple& val_)
      {
        os_ << "Test::Simple"
            << '{'
            << "o=" << IDL::traits< uint8_t>::write(val_.o ())
            << ",l=" << IDL::traits< int32_t>::write(val_.l ())
            << ",s=" << IDL::traits< std::string>::write(val_.s ())
            << ",d=" << IDL::traits< double>::write(val_.d ())
            << ",b=" << IDL::traits< bool>::write(val_.b ())
            << ",c=" << IDL::traits< char>::write(val_.c ())
            << ",bar_ref=" << IDL::traits< ::Test::Bar>::write(val_.bar_ref ())
            << ",v=" << IDL::traits< ::Test::Variable>::write(val_.v ())
            << '}';
        return os_;
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
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
               val_,
               "Test::Foo");
      return os_;
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
  void swap (::Test::Variable& m1, ::Test::Variable& m2);

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  void swap (::Test::Simple& m1, ::Test::Simple& m2);
} // namespace std

// generated from c++11/templates/cli/inl/struct_inl.erb
inline Test::Variable::Variable (
  std::string name)
  : name_ (std::move (name))
{
}

inline void Test::Variable::name (const std::string& _name) { this->name_ = _name; }
inline void Test::Variable::name (std::string&& _name) { this->name_ = std::move (_name); }
inline const std::string& Test::Variable::name () const { return this->name_; }
inline std::string& Test::Variable::name () { return this->name_; }

inline void Test::Variable::swap (::Test::Variable& s)
{
  std::swap (this->name_, s.name_);
}

// generated from c++11/templates/cli/inl/struct_inl.erb
inline Test::Simple::Simple (
  uint8_t o,
  int32_t l,
  std::string s,
  double d,
  bool b,
  char c,
  TAOX11_IDL::traits< ::Test::Bar>::ref_type bar_ref,
  ::Test::Variable v)
  : o_ (std::move (o))
  , l_ (std::move (l))
  , s_ (std::move (s))
  , d_ (std::move (d))
  , b_ (std::move (b))
  , c_ (std::move (c))
  , bar_ref_ (std::move (bar_ref))
  , v_ (std::move (v))
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

inline void Test::Simple::bar_ref (TAOX11_IDL::traits< ::Test::Bar>::ref_type _bar_ref) { this->bar_ref_ = _bar_ref; }
inline TAOX11_IDL::traits< ::Test::Bar>::ref_type Test::Simple::bar_ref () const { return this->bar_ref_; }
inline TAOX11_IDL::traits< ::Test::Bar>::ref_type& Test::Simple::bar_ref () { return this->bar_ref_; }

inline void Test::Simple::v (const ::Test::Variable& _v) { this->v_ = _v; }
inline void Test::Simple::v (::Test::Variable&& _v) { this->v_ = std::move (_v); }
inline const ::Test::Variable& Test::Simple::v () const { return this->v_; }
inline ::Test::Variable& Test::Simple::v () { return this->v_; }

inline void Test::Simple::swap (::Test::Simple& s)
{
  std::swap (this->o_, s.o_);
  std::swap (this->l_, s.l_);
  std::swap (this->s_, s.s_);
  std::swap (this->d_, s.d_);
  std::swap (this->b_, s.b_);
  std::swap (this->c_, s.c_);
  std::swap (this->bar_ref_, s.bar_ref_);
  std::swap (this->v_, s.v_);
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++11/templates/cli/hdr/struct_std.erb
  template <>
  inline void swap (::Test::Variable& m1, ::Test::Variable& m2)
  {
    m1.swap (m2);
  }

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
    const ::Test::Variable& _v)
{
  return IDL::traits< ::Test::Variable>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/interface_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::Test::Bar>::ref_type _v)
{
  return IDL::traits< ::Test::Bar>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/struct_os.erb
inline std::ostream&
operator<< (
    std::ostream& strm,
    const ::Test::Simple& _v)
{
  return IDL::traits< ::Test::Simple>::write_on (strm, _v);
}

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

#endif /* __RIDL_TESTC_H_CGJIACDA_INCLUDED__ */

// -*- END -*-

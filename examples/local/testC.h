/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Westervoort, GLD
 *        The Netherlands
 *        http://www.remedy.nl
 */

#ifndef __RIDL_TESTC_H_ECBHJGID_INCLUDED__
#define __RIDL_TESTC_H_ECBHJGID_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 5 || TAOX11_MICRO_VERSION != 4
#error This file was generated with another RIDL C++11 backend version (1.5.4). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc test.idl::Test
namespace Test
{

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
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
      typedef std::true_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;
      /// Trait for the type from which a local implementation needs
      /// to be derived from
      typedef ::Test::Foo base_type;

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
  /// @copydoc test.idl::Test::Foo
  class Foo
    : public virtual TAOX11_NAMESPACE::CORBA::LocalObject
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Foo>           _traits_type;
    /// Strong reference type
    typedef TAOX11_IDL::traits< Foo>::ref_type _ref_type;
    //@}

    /// Determine if we are of the type specified by the @a logical_type_id.
    virtual bool _is_a (const std::string& local_type_id) override;

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc test.idl::Test::Foo::do_something
    virtual
    void
    do_something () = 0;

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

#if defined (ACE_WIN32_VC14)
    /// Default constructor
    Foo () {};
#else
    /// Default constructor
    Foo () = default;
#endif
    /// Destructor
    ~Foo () = default;

    /// Returns a strong client reference for the local object you are calling
    IDL::traits< ::Test::Foo>::ref_type _this ();

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Foo (const Foo&) = delete;
    Foo (Foo&&) = delete;
    Foo& operator= (const Foo&) = delete;
    Foo& operator= (Foo&&) = delete;
    //@}
  }; // Foo

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_BAR_FWD_)
#define _INTF_TEST_BAR_FWD_
  class Bar;
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
      typedef std::true_type is_local;
      /// std::false_type or std::true_type type indicating whether
      /// this interface is declared as abstract
      typedef std::false_type is_abstract;
      /// Trait for the type from which a local implementation needs
      /// to be derived from
      typedef ::Test::Bar base_type;

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
  /// @copydoc test.idl::Test::Bar
  class Bar
    : public virtual TAOX11_NAMESPACE::CORBA::LocalObject
  {
  public:
    template <typename T> friend struct TAOX11_CORBA::object_traits;

    /// @name Member types
    //@{
    typedef TAOX11_IDL::traits< Bar>           _traits_type;
    /// Strong reference type
    typedef TAOX11_IDL::traits< Bar>::ref_type _ref_type;
    //@}

    /// Determine if we are of the type specified by the @a logical_type_id.
    virtual bool _is_a (const std::string& local_type_id) override;

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc test.idl::Test::Bar::do_foo
    virtual
    void
    do_foo (
        IDL::traits< ::Test::Foo>::ref_type f) = 0;

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Bar>   _shared_ptr_type;

#if defined (ACE_WIN32_VC14)
    /// Default constructor
    Bar () {};
#else
    /// Default constructor
    Bar () = default;
#endif
    /// Destructor
    ~Bar () = default;

    /// Returns a strong client reference for the local object you are calling
    IDL::traits< ::Test::Bar>::ref_type _this ();

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Bar (const Bar&) = delete;
    Bar (Bar&&) = delete;
    Bar& operator= (const Bar&) = delete;
    Bar& operator= (Bar&&) = delete;
    //@}
  }; // Bar
} // namespace Test


// generated from StubHeaderIDLTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/interface_idl_traits.erb
#if !defined (_INTF_FMT_TEST_FOO_TRAITS_DECL_)
#define _INTF_FMT_TEST_FOO_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::Test::Foo, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          IDL::traits< ::Test::Foo>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Foo>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST_FOO_TRAITS_DECL_

    // generated from c++11/templates/cli/hdr/interface_idl_traits.erb
#if !defined (_INTF_FMT_TEST_BAR_TRAITS_DECL_)
#define _INTF_FMT_TEST_BAR_TRAITS_DECL_
    template <typename OStrm_>
    struct formatter< ::Test::Bar, OStrm_>
    {
      OStrm_& operator ()(
          OStrm_& ,
          IDL::traits< ::Test::Bar>::ref_type);
    };

    template <typename OStrm_, typename Fmt>
    OStrm_& operator <<(
        OStrm_&,
        IDL::traits< ::Test::Bar>::__Writer<Fmt>);
#endif // !_INTF_FMT_TEST_BAR_TRAITS_DECL_
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from StubHeaderIDLTraitsDefWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def.erb
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::Test::Foo, OStrm_>::operator ()(
          OStrm_& os_,
          IDL::traits< ::Test::Foo>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
               std::move (val_),
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

    // generated from c++11/templates/cli/hdr/interface_idl_traits_def.erb
    template <typename OStrm_>
    inline OStrm_&
    formatter< ::Test::Bar, OStrm_>::operator ()(
          OStrm_& os_,
          IDL::traits< ::Test::Bar>::ref_type val_)
    {
      os_ << IDL::traits<TAOX11_CORBA::Object>::_dump (
               std::move (val_),
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
  } // namespace IDL
} // namespace TAOX11_NAMESPACE

// generated from c++11/templates/cli/hdr/interface_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    IDL::traits< ::Test::Foo>::ref_type _v)
{
  return IDL::traits< ::Test::Foo>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/interface_os.erb
inline std::ostream& operator<< (
    std::ostream& strm,
    IDL::traits< ::Test::Bar>::ref_type _v)
{
  return IDL::traits< ::Test::Bar>::write_on (strm, _v);
}

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_ECBHJGID_INCLUDED__ */

// -*- END -*-

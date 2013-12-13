// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_FAADBJFI_INCLUDED__
#define __RIDL_TESTC_H_FAADBJFI_INCLUDED__


#include /**/ "ace/pre.h"

#include "tao/x11/stddef.h"
#include "tao/x11/basic_traits.h"
#include "tao/x11/corba.h"
#include "tao/x11/system_exception.h"
#include "tao/x11/orb.h"
#include "tao/x11/user_exception.h"
#include "tao/x11/object.h"
#include "tao/x11/corba_ostream.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.3.0). Please re-generate.
#endif

using namespace TAOX11_NAMESPACE;

// generated from StubHeaderWriter#enter_module
/// @copydoc Test
namespace Test
{

  // generated from c++11/templates/cli/hdr/except_pre.erb
  /// @copydoc Test::FooEx
  class FooEx final
   : public TAOX11_NAMESPACE::CORBA::UserException
  {
  public:

    virtual void _raise () const override;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const override;

    virtual void _tao_decode (TAO_InputCDR &cdr) override;

    /// Deep copy
    virtual TAOX11_NAMESPACE::CORBA::Exception *_tao_duplicate () const override;

    // generated from c++11/templates/cli/hdr/except_post.erb
    FooEx ();
    virtual ~FooEx () throw ();
    FooEx (const FooEx&) = default;
    FooEx (FooEx&&) = default;
    explicit FooEx (std::string message);
    FooEx& operator= (const FooEx& x);
    FooEx& operator= (FooEx&& x);

    /// @copydoc Test::FooEx::message
    //@{
    void message (const std::string& _message);
    void message (std::string&& _message);
    const std::string& message () const;
    std::string& message ();
    //@}

  protected:
    virtual void _info (std::ostream&) const override;

  private:
    std::string message_;
  }; // FooEx

  // generated from c++11/templates/cli/hdr/except_pre.erb
  /// @copydoc Test::BooEx
  class BooEx final
   : public TAOX11_NAMESPACE::CORBA::UserException
  {
  public:

    virtual void _raise () const override;

    virtual void _tao_encode (TAO_OutputCDR &cdr) const override;

    virtual void _tao_decode (TAO_InputCDR &cdr) override;

    /// Deep copy
    virtual TAOX11_NAMESPACE::CORBA::Exception *_tao_duplicate () const override;

    // generated from c++11/templates/cli/hdr/except_post.erb
    BooEx ();
    virtual ~BooEx () throw ();
    BooEx (const BooEx&) = default;
    BooEx (BooEx&&) = default;
    explicit BooEx (int32_t id);
    BooEx& operator= (const BooEx& x);
    BooEx& operator= (BooEx&& x);

    /// @copydoc Test::BooEx::id
    //@{
    void id (int32_t _id);
    int32_t id () const;
    int32_t& id ();
    //@}

  protected:
    virtual void _info (std::ostream&) const override;

  private:
    int32_t id_;
  }; // BooEx

  // generated from StubHeaderWriter#enter_interface

  // generated from c++11/templates/cli/hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;
#endif // !_INTF_TEST_FOO_FWD_
  // generated from Base::CodeWriter#at_global_scope
}; // Test
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
  };

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
    };
  };
};
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
    /// @copydoc Test::Foo::do_it
    virtual void do_it ();

    // generated from c++11/templates/cli/hdr/attribute.erb
    /// @copydoc Test::Foo::a_number
    virtual int32_t a_number();

    // generated from c++11/templates/cli/hdr/attribute.erb
    /// @copydoc Test::Foo::a_string
    //@{
    virtual std::string a_string();
    virtual void a_string(const std::string& _v);
    //@}

    // generated from c++11/templates/cli/hdr/operation.erb
    /// @copydoc Test::Foo::shutdown
    virtual void shutdown ();

    // generated from c++11/templates/cli/hdr/interface_post.erb
  protected:
    typedef std::shared_ptr<Foo>   _shared_ptr_type;

    template <typename _Tp1, typename, typename ...Args>
    friend TAOX11_CORBA::object_reference<_Tp1> TAOX11_CORBA::make_reference(Args&& ...args);

    explicit Foo (Foo_proxy_ptr p);
    explicit Foo (Foo_proxy_ptr p, bool);
    /// Default constructor
    Foo ();
    /// Default destructor
    ~Foo () = default;

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&&) = delete;
    Foo_proxy_ptr foo_proxy_;
    //@}
  }; // Foo
}; // namespace Test


// generated from StubHeaderTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE
{
  namespace IDL
  {

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_FOOEX_TRAITS_)
#define _STRUCT_TEST_FOOEX_TRAITS_
    template<>
    struct traits < ::Test::FooEx>
      : IDL::common_traits< ::Test::FooEx>
    {
    };
#endif // _STRUCT_TEST_FOOEX_TRAITS_

    // generated from c++11/templates/cli/hdr/struct_idl_traits.erb
#if !defined (_STRUCT_TEST_BOOEX_TRAITS_)
#define _STRUCT_TEST_BOOEX_TRAITS_
    template<>
    struct traits < ::Test::BooEx>
      : IDL::common_traits< ::Test::BooEx>
    {
    };
#endif // _STRUCT_TEST_BOOEX_TRAITS_
  }; // IDL
}; // TAOX11_NAMESPACE

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++11/templates/cli/inl/except_inl.erb
inline Test::FooEx::FooEx ()
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/FooEx:1.0", "FooEx")
  , message_ (std::string())
{
}

inline Test::FooEx::FooEx (std::string message)
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/FooEx:1.0", "FooEx")
  , message_ (std::move (message))
{
}

inline void Test::FooEx::message (const std::string& _message) { this->message_ = _message; }
inline void Test::FooEx::message (std::string&& _message) { this->message_ = std::move (_message); }
inline const std::string& Test::FooEx::message () const { return this->message_; }
inline std::string& Test::FooEx::message () { return this->message_; }

inline ::Test::FooEx& Test::FooEx::operator= (const FooEx& x)
{
  if (this != &x)
  {
    this->UserException::operator = (x);
    this->message_ = x.message_;
  }
  return *this;
}

inline ::Test::FooEx& Test::FooEx::operator= (::Test::FooEx&& x)
{
  if (this != &x)
  {
    this->UserException::operator = (x);
    this->message_ = std::move (x.message_);
  }
  return *this;
}

// generated from c++11/templates/cli/inl/except_inl.erb
inline Test::BooEx::BooEx ()
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/BooEx:1.0", "BooEx")
  , id_ (0)
{
}

inline Test::BooEx::BooEx (int32_t id)
  : TAOX11_NAMESPACE::CORBA::UserException ("IDL:Test/BooEx:1.0", "BooEx")
  , id_ (std::move (id))
{
}

inline void Test::BooEx::id (int32_t _id) { this->id_ = _id; }
inline int32_t Test::BooEx::id () const { return this->id_; }
inline int32_t& Test::BooEx::id () { return this->id_; }

inline ::Test::BooEx& Test::BooEx::operator= (const ::Test::BooEx& x)
{
  if (this != &x)
  {
    this->UserException::operator = (x);
    this->id_ = x.id_;
  }
  return *this;
}

inline ::Test::BooEx& Test::BooEx::operator= (::Test::BooEx&& x)
{
  if (this != &x)
  {
    this->UserException::operator = (x);
    this->id_ = std::move (x.id_);
  }
  return *this;
}

// generated from StubHeaderStdWriter#pre_visit
namespace std {
}; // std

// generated from c++11/templates/cli/hdr/interface_os.erb
std::ostream& operator<< (
    std::ostream& strm,
    TAOX11_IDL::traits< ::Test::Foo>::ref_type);

// generated from c++11/templates/cli/hdr/post.erb
#if defined (__TAOX11_INCLUDE_STUB_PROXY__)
#include "testCP.h"
#endif

#include /**/ "ace/post.h"

#endif /* __RIDL_TESTC_H_FAADBJFI_INCLUDED__ */

// -*- END -*-

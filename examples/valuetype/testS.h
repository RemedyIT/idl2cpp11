/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTS_H_GJGJBAEB_INCLUDED__
#define __RIDL_TESTS_H_GJGJBAEB_INCLUDED__

#pragma once

#include "testC.h"

#include "tao/x11/portable_server/servantbase.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 8 || TAOX11_MICRO_VERSION != 1
#error This file was generated with another RIDL C++11 backend version (1.8.1). Please re-generate.
#endif
// generated from c++11/templates/srv/hdr/interface_pre
namespace POA
{
  class A_srvproxy;
  using A_srvproxy_ptr = A_srvproxy*;

  class A
    : public virtual TAOX11_NAMESPACE::PortableServer::Servant
  {
  public:
    /// @name Member types
    //@{
    using _traits_type = TAOX11_CORBA::servant_traits<A>;
    using _ref_type = TAOX11_CORBA::servant_reference<A>;
    //@}

  protected:
    explicit A (bool inherited = false);
    ~A () override;

    Servant_proxy_ptr get_proxy () const override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:
    /// Determine if we are of the type specified by the @a logical_type_id.
    bool _is_a (const std::string& logical_type_id) override;

    /// Returns a strong client reference for the servant you are calling
    IDL::traits< ::A>::ref_type _this ();

    const std::string &_interface_repository_id () const override;

    // generated from c++11/templates/srv/hdr/operation
    /// @copydoc test.idl::A::op
    virtual void
    op () = 0;
  private:
    // generated from c++11/templates/srv/hdr/interface_post
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    A (const A&) = delete;
    A (A&&) = delete;
    A& operator= (const A&) = delete;
    A& operator= (A&&) = delete;
    //@}
    friend class POA::A_srvproxy;

    POA::A_srvproxy_ptr a_srvproxy_{};
  };
} // namespace POA
// generated from c++11/templates/srv/hdr/interface_pre
namespace POA
{
  class X_srvproxy;
  using X_srvproxy_ptr = X_srvproxy*;

  class X
    : public virtual TAOX11_NAMESPACE::PortableServer::Servant
  {
  public:
    /// @name Member types
    //@{
    using _traits_type = TAOX11_CORBA::servant_traits<X>;
    using _ref_type = TAOX11_CORBA::servant_reference<X>;
    //@}

  protected:
    explicit X (bool inherited = false);
    ~X () override;

    Servant_proxy_ptr get_proxy () const override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:
    /// Determine if we are of the type specified by the @a logical_type_id.
    bool _is_a (const std::string& logical_type_id) override;

    /// Returns a strong client reference for the servant you are calling
    IDL::traits< ::X>::ref_type _this ();

    const std::string &_interface_repository_id () const override;

    // generated from c++11/templates/srv/hdr/operation
    /// @copydoc test.idl::X::op
    virtual void
    op (
        std::string& s) = 0;
  private:
    // generated from c++11/templates/srv/hdr/interface_post
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    X (const X&) = delete;
    X (X&&) = delete;
    X& operator= (const X&) = delete;
    X& operator= (X&&) = delete;
    //@}
    friend class POA::X_srvproxy;

    POA::X_srvproxy_ptr x_srvproxy_{};
  };
} // namespace POA
// generated from c++11/templates/srv/hdr/interface_pre
namespace POA
{
  class A1_srvproxy;
  using A1_srvproxy_ptr = A1_srvproxy*;

  class A1
    : public virtual TAOX11_NAMESPACE::PortableServer::Servant
  {
  public:
    /// @name Member types
    //@{
    using _traits_type = TAOX11_CORBA::servant_traits<A1>;
    using _ref_type = TAOX11_CORBA::servant_reference<A1>;
    //@}

  protected:
    explicit A1 (bool inherited = false);
    ~A1 () override;

    Servant_proxy_ptr get_proxy () const override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:
    /// Determine if we are of the type specified by the @a logical_type_id.
    bool _is_a (const std::string& logical_type_id) override;

    /// Returns a strong client reference for the servant you are calling
    IDL::traits< ::A1>::ref_type _this ();

    const std::string &_interface_repository_id () const override;

    // generated from c++11/templates/srv/hdr/operation
    /// @copydoc test.idl::A1::op
    virtual void
    op () = 0;
  private:
    // generated from c++11/templates/srv/hdr/interface_post
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    A1 (const A1&) = delete;
    A1 (A1&&) = delete;
    A1& operator= (const A1&) = delete;
    A1& operator= (A1&&) = delete;
    //@}
    friend class POA::A1_srvproxy;

    POA::A1_srvproxy_ptr a1_srvproxy_{};
  };
} // namespace POA

// generated from c++11/templates/srv/hdr/valuetype_pre
namespace POA
{
  class B
    : public virtual ::POA::A1
    , public virtual TAOX11_CORBA::valuetype_traits<B>::base_type
  {
  public:
    /// @name Member types
    //@{
    using _traits_type = TAOX11_CORBA::servant_traits<B>;
    using _ref_type = TAOX11_CORBA::servant_reference<B>;
    //@}

  protected:
    using _shared_ptr_type = std::shared_ptr<B>;
    B () = default;
    ~B () override = default;

    template <typename T> friend class TAOX11_CORBA::servant_reference;

    TAOX11_NAMESPACE::PortableServer::Servant::_shared_ptr_type _lock_shared ();

  private:
    /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
    //@{
    B (const B&) = delete;
    B (B&&) = delete;
    B& operator= (const B&) = delete;
    B& operator= (B&&) = delete;
    //@}
  };
} // namespace POA

// generated from ServantHeaderSrvTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace CORBA {

    // generated from c++11/templates/srv/hdr/interface_servant_traits
    template <>
    struct servant_traits<::A>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      using base_type = ::POA::A;
      /// Strong reference type
      using ref_type = TAOX11_CORBA::servant_reference<::POA::A>;
      /// Weak reference type
      using weak_ref_type = TAOX11_CORBA::weak_servant_reference<::POA::A>;
      /// Try to narrow the provided reference @a base to a ::A
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible<::POA::A*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (std::move(base));
      }
    };

    // generated from c++11/templates/srv/hdr/interface_servant_traits
    template <>
    struct servant_traits<::X>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      using base_type = ::POA::X;
      /// Strong reference type
      using ref_type = TAOX11_CORBA::servant_reference<::POA::X>;
      /// Weak reference type
      using weak_ref_type = TAOX11_CORBA::weak_servant_reference<::POA::X>;
      /// Try to narrow the provided reference @a base to a ::X
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible<::POA::X*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (std::move(base));
      }
    };

    // generated from c++11/templates/srv/hdr/interface_servant_traits
    template <>
    struct servant_traits<::A1>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      using base_type = ::POA::A1;
      /// Strong reference type
      using ref_type = TAOX11_CORBA::servant_reference<::POA::A1>;
      /// Weak reference type
      using weak_ref_type = TAOX11_CORBA::weak_servant_reference<::POA::A1>;
      /// Try to narrow the provided reference @a base to a ::A1
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible<::POA::A1*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (std::move(base));
      }
    };

    // generated from c++11/templates/srv/hdr/interface_servant_traits
    template <>
    struct servant_traits<::B>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      using base_type = ::POA::B;
      /// Strong reference type
      using ref_type = TAOX11_CORBA::servant_reference<::POA::B>;
      /// Weak reference type
      using weak_ref_type = TAOX11_CORBA::weak_servant_reference<::POA::B>;
      /// Try to narrow the provided reference @a base to a ::B
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible<::POA::B*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (std::move(base));
      }
    };
  } // namespace CORBA
} // namespace TAOX11_NAMESPACE

#endif /* __RIDL_TESTS_H_GJGJBAEB_INCLUDED__ */

// -*- END -*-

// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Westervoort, GLD
 *        The Netherlands
 *        http://www.remedy.nl
 */

#ifndef __RIDL_TESTS_H_DDJCFJCD_INCLUDED__
#define __RIDL_TESTS_H_DDJCFJCD_INCLUDED__

#include "testC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/x11/portable_server/servantbase.h"

#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 6 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.6.0). Please re-generate.
#endif

// generated from c++11/templates/srv/hdr/interface_pre.erb
namespace POA
{
  class A_srvproxy;
  typedef A_srvproxy* A_srvproxy_ptr;

  class A
    : public virtual TAOX11_NAMESPACE::PortableServer::Servant
  {
  public:
    /// @name Member types
    //@{
    typedef TAOX11_CORBA::servant_traits< A>    _traits_type;
    typedef TAOX11_CORBA::servant_reference< A> _ref_type;
    //@}

  protected:
    /// Constructor
    explicit A (bool inherited = false);

    /// Destructor
    virtual ~A ();

    virtual Servant_proxy_ptr get_proxy () override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:

    /// Determine if we are of the type specified by the @a logical_type_id.
    virtual bool _is_a (const std::string& logical_type_id) override;

    /// Returns a strong client reference for the servant you are calling
    IDL::traits< ::A>::ref_type _this ();

    virtual const std::string &_interface_repository_id () const override;

    // generated from c++11/templates/srv/hdr/operation.erb
    /// @copydoc test.idl::A::op
    virtual
    void
    op () = 0;

    // generated from c++11/templates/srv/hdr/interface_post.erb
  private:
    A (const A&) = delete;
    A (A&&) = delete;
    A& operator= (const A&) = delete;
    A& operator= (A&&) = delete;
    friend class POA::A_srvproxy;

    POA::A_srvproxy_ptr a_srvproxy_{};
  };

} // namespace POA

// generated from c++11/templates/srv/hdr/interface_pre.erb
namespace POA
{
  class X_srvproxy;
  typedef X_srvproxy* X_srvproxy_ptr;

  class X
    : public virtual TAOX11_NAMESPACE::PortableServer::Servant
  {
  public:
    /// @name Member types
    //@{
    typedef TAOX11_CORBA::servant_traits< X>    _traits_type;
    typedef TAOX11_CORBA::servant_reference< X> _ref_type;
    //@}

  protected:
    /// Constructor
    explicit X (bool inherited = false);

    /// Destructor
    virtual ~X ();

    virtual Servant_proxy_ptr get_proxy () override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:

    /// Determine if we are of the type specified by the @a logical_type_id.
    virtual bool _is_a (const std::string& logical_type_id) override;

    /// Returns a strong client reference for the servant you are calling
    IDL::traits< ::X>::ref_type _this ();

    virtual const std::string &_interface_repository_id () const override;

    // generated from c++11/templates/srv/hdr/operation.erb
    /// @copydoc test.idl::X::op
    virtual
    void
    op (
        std::string& s) = 0;

    // generated from c++11/templates/srv/hdr/interface_post.erb
  private:
    X (const X&) = delete;
    X (X&&) = delete;
    X& operator= (const X&) = delete;
    X& operator= (X&&) = delete;
    friend class POA::X_srvproxy;

    POA::X_srvproxy_ptr x_srvproxy_{};
  };

} // namespace POA

// generated from c++11/templates/srv/hdr/interface_pre.erb
namespace POA
{
  class A1_srvproxy;
  typedef A1_srvproxy* A1_srvproxy_ptr;

  class A1
    : public virtual TAOX11_NAMESPACE::PortableServer::Servant
  {
  public:
    /// @name Member types
    //@{
    typedef TAOX11_CORBA::servant_traits< A1>    _traits_type;
    typedef TAOX11_CORBA::servant_reference< A1> _ref_type;
    //@}

  protected:
    /// Constructor
    explicit A1 (bool inherited = false);

    /// Destructor
    virtual ~A1 ();

    virtual Servant_proxy_ptr get_proxy () override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:

    /// Determine if we are of the type specified by the @a logical_type_id.
    virtual bool _is_a (const std::string& logical_type_id) override;

    /// Returns a strong client reference for the servant you are calling
    IDL::traits< ::A1>::ref_type _this ();

    virtual const std::string &_interface_repository_id () const override;

    // generated from c++11/templates/srv/hdr/operation.erb
    /// @copydoc test.idl::A1::op
    virtual
    void
    op () = 0;

    // generated from c++11/templates/srv/hdr/interface_post.erb
  private:
    A1 (const A1&) = delete;
    A1 (A1&&) = delete;
    A1& operator= (const A1&) = delete;
    A1& operator= (A1&&) = delete;
    friend class POA::A1_srvproxy;

    POA::A1_srvproxy_ptr a1_srvproxy_{};
  };

} // namespace POA

// generated from c++11/templates/srv/hdr/valuetype_pre.erb
namespace POA
{
  class B
    : public virtual ::POA::A1
    , public virtual TAOX11_CORBA::valuetype_traits< B>::base_type
  {
  public:
    /// @name Member types
    //@{
    typedef TAOX11_CORBA::servant_traits< B>    _traits_type;
    typedef TAOX11_CORBA::servant_reference< B> _ref_type;
    //@}

  protected:
    typedef std::shared_ptr<B>  _shared_ptr_type;
    /// Constructor
    B ();
    /// Destructor
    virtual ~B ();

    template <typename T> friend class TAOX11_CORBA::servant_reference;

    TAOX11_NAMESPACE::PortableServer::Servant::_shared_ptr_type _lock_shared ();
  };
} // namespace POA

// generated from ServantHeaderSrvTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace CORBA {

    // generated from c++11/templates/srv/hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::A>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      typedef ::POA::A
          base_type;
      /// Strong reference type
      typedef TAOX11_CORBA::servant_reference< ::POA::A>
          ref_type;
      /// Weak reference type
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::A>
          weak_ref_type;
      /// Try to narrow the provided reference @a base to a ::A
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::A*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (base);
      }
    };

    // generated from c++11/templates/srv/hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::X>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      typedef ::POA::X
          base_type;
      /// Strong reference type
      typedef TAOX11_CORBA::servant_reference< ::POA::X>
          ref_type;
      /// Weak reference type
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::X>
          weak_ref_type;
      /// Try to narrow the provided reference @a base to a ::X
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::X*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (base);
      }
    };

    // generated from c++11/templates/srv/hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::A1>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      typedef ::POA::A1
          base_type;
      /// Strong reference type
      typedef TAOX11_CORBA::servant_reference< ::POA::A1>
          ref_type;
      /// Weak reference type
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::A1>
          weak_ref_type;
      /// Try to narrow the provided reference @a base to a ::A1
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::A1*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (base);
      }
    };

    // generated from c++11/templates/srv/hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::B>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      typedef ::POA::B
          base_type;
      /// Strong reference type
      typedef TAOX11_CORBA::servant_reference< ::POA::B>
          ref_type;
      /// Weak reference type
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::B>
          weak_ref_type;
      /// Try to narrow the provided reference @a base to a ::B
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::B*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (base);
      }
    };
  } // namespace CORBA
} // namespace TAOX11_NAMESPACE

#endif /* __RIDL_TESTS_H_DDJCFJCD_INCLUDED__ */

// -*- END -*-

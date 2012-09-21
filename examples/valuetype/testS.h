// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTS_H_INCLUDED__
#define __RIDL_TESTS_H_INCLUDED__

#include "testC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/x11/portable_server/servantbase.h"

// generated from c++/srv_hdr/interface_pre.erb
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
    A ();

    /// Constructor for inheritance chains
    A (bool);

    /// Destructor
    virtual ~A ();

    virtual Servant_proxy_ptr get_proxy () override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:

    virtual bool _is_a (const std::string& logical_type_id) override;

    TAOX11_NAMESPACE::IDL::traits< ::A>::ref_type _this ();

    virtual const std::string _interface_repository_id () const override;

    // generated from c++/srv_hdr/operation.erb
    virtual void op (void) = 0;

    // generated from c++/srv_hdr/interface_post.erb
  private:
    friend class POA::A_srvproxy;

    POA::A_srvproxy_ptr a_srvproxy_;
  };

}; // POA

// generated from c++/srv_hdr/interface_pre.erb
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
    X ();

    /// Constructor for inheritance chains
    X (bool);

    /// Destructor
    virtual ~X ();

    virtual Servant_proxy_ptr get_proxy () override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:

    virtual bool _is_a (const std::string& logical_type_id) override;

    TAOX11_NAMESPACE::IDL::traits< ::X>::ref_type _this ();

    virtual const std::string _interface_repository_id () const override;

    // generated from c++/srv_hdr/operation.erb
    virtual void op (std::string& s) = 0;

    // generated from c++/srv_hdr/interface_post.erb
  private:
    friend class POA::X_srvproxy;

    POA::X_srvproxy_ptr x_srvproxy_;
  };

}; // POA

// generated from c++/srv_hdr/interface_pre.erb
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
    A1 ();

    /// Constructor for inheritance chains
    A1 (bool);

    /// Destructor
    virtual ~A1 ();

    virtual Servant_proxy_ptr get_proxy () override;

    template <typename T> friend class TAOX11_CORBA::servant_reference;
  public:

    virtual bool _is_a (const std::string& logical_type_id) override;

    TAOX11_NAMESPACE::IDL::traits< ::A1>::ref_type _this ();

    virtual const std::string _interface_repository_id () const override;

    // generated from c++/srv_hdr/operation.erb
    virtual void op (void) = 0;

    // generated from c++/srv_hdr/interface_post.erb
  private:
    friend class POA::A1_srvproxy;

    POA::A1_srvproxy_ptr a1_srvproxy_;
  };

}; // POA

// generated from c++/srv_hdr/valuetype_pre.erb
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
    B ();
    virtual ~B ();

    template <typename T> friend class TAOX11_CORBA::servant_reference;

    TAOX11_NAMESPACE::PortableServer::Servant::_shared_ptr_type _lock_shared ();
  };
};

// generated from ServantHeaderSrvTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace CORBA {

    // generated from c++/srv_hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::A>
    {
      typedef ::POA::A
          base_type;
      typedef TAOX11_CORBA::servant_reference< ::POA::A>
          ref_type;
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::A>
          weak_ref_type;
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::A*, _Tp1*>::value>::type>
      static ref_type downcast (servant_reference<_Tp1> base)
      {
        return ref_type::_downcast (base);
      }
    };

    // generated from c++/srv_hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::X>
    {
      typedef ::POA::X
          base_type;
      typedef TAOX11_CORBA::servant_reference< ::POA::X>
          ref_type;
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::X>
          weak_ref_type;
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::X*, _Tp1*>::value>::type>
      static ref_type downcast (servant_reference<_Tp1> base)
      {
        return ref_type::_downcast (base);
      }
    };

    // generated from c++/srv_hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::A1>
    {
      typedef ::POA::A1
          base_type;
      typedef TAOX11_CORBA::servant_reference< ::POA::A1>
          ref_type;
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::A1>
          weak_ref_type;
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::A1*, _Tp1*>::value>::type>
      static ref_type downcast (servant_reference<_Tp1> base)
      {
        return ref_type::_downcast (base);
      }
    };

    // generated from c++/srv_hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::B>
    {
      typedef ::POA::B
          base_type;
      typedef TAOX11_CORBA::servant_reference< ::POA::B>
          ref_type;
      typedef TAOX11_CORBA::weak_servant_reference< ::POA::B>
          weak_ref_type;
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::POA::B*, _Tp1*>::value>::type>
      static ref_type downcast (servant_reference<_Tp1> base)
      {
        return ref_type::_downcast (base);
      }
    };
  }; // CORBA
}; // TAOX11_NAMESPACE

#endif // __RIDL_TESTS_H_INCLUDED__

// -*- END -*-

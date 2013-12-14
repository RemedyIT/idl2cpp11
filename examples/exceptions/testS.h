// -*- C++ -*-
/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTS_H_BHEBAFBC_INCLUDED__
#define __RIDL_TESTS_H_BHEBAFBC_INCLUDED__

#include "testC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/x11/portable_server/servantbase.h"


#include "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 3 || TAOX11_BETA_VERSION != 0
#error This file was generated with another RIDL C++11 backend version (1.3.0). Please re-generate.
#endif

// generated from ServantHeaderWriter#enter_module
namespace Test
{

  // generated from c++11/templates/srv/hdr/interface_pre.erb
  namespace POA
  {
    class Foo_srvproxy;
    typedef Foo_srvproxy* Foo_srvproxy_ptr;

    class Foo
      : public virtual TAOX11_NAMESPACE::PortableServer::Servant
    {
    public:
      /// @name Member types
      //@{
      typedef TAOX11_CORBA::servant_traits< Foo>    _traits_type;
      typedef TAOX11_CORBA::servant_reference< Foo> _ref_type;
      //@}

    protected:
      /// Constructor
      Foo ();

      /// Constructor for inheritance chains
      explicit Foo (bool);

      /// Destructor
      virtual ~Foo ();

      virtual Servant_proxy_ptr get_proxy () override;

      template <typename T> friend class TAOX11_CORBA::servant_reference;
    public:

      /// Determine if we are of the type specified by the @a logical_type_id.
      virtual bool _is_a (const std::string& logical_type_id) override;

      /// Returns a strong client reference for the servant you are calling
      TAOX11_IDL::traits< ::Test::Foo>::ref_type _this ();

      virtual const std::string &_interface_repository_id () const override;

      // generated from c++11/templates/srv/hdr/operation.erb
      /// @copydoc Test::Foo::do_it
      virtual void do_it () = 0;

      // generated from c++11/templates/srv/hdr/attribute.erb
      virtual int32_t a_number() = 0;

      // generated from c++11/templates/srv/hdr/attribute.erb
      virtual std::string a_string() = 0;
      virtual void a_string(const std::string& _v) = 0;

      // generated from c++11/templates/srv/hdr/operation.erb
      /// @copydoc Test::Foo::shutdown
      virtual void shutdown () = 0;

      // generated from c++11/templates/srv/hdr/interface_post.erb
    private:
      Foo (const Foo&) = delete;
      Foo (Foo&&) = delete;
      Foo& operator= (const Foo&) = delete;
      Foo& operator= (Foo&&) = delete;
      friend class POA::Foo_srvproxy;

      POA::Foo_srvproxy_ptr foo_srvproxy_;
    };

  }; // POA
}; // namespace Test


// generated from ServantHeaderSrvTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace CORBA {

    // generated from c++11/templates/srv/hdr/interface_servant_traits.erb
    template <>
    struct servant_traits< ::Test::Foo>
    {
      typedef ::Test::POA::Foo
          base_type;
      /// Strong reference type
      typedef TAOX11_CORBA::servant_reference< ::Test::POA::Foo>
          ref_type;
      /// Weak reference type
      typedef TAOX11_CORBA::weak_servant_reference< ::Test::POA::Foo>
          weak_ref_type;
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible< ::Test::POA::Foo*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (base);
      }
    };
  }; // CORBA
}; // TAOX11_NAMESPACE

#endif /* __RIDL_TESTS_H_BHEBAFBC_INCLUDED__ */

// -*- END -*-

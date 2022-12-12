/**
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT Expertise BV
 *        The Netherlands
 *        https://www.remedy.nl
 */

#ifndef __RIDL_TESTS_H_BGGJCGGA_INCLUDED__
#define __RIDL_TESTS_H_BGGJCGGA_INCLUDED__

#pragma once

#include "testC.h"

#include "tao/x11/portable_server/servantbase.h"

#include /**/ "tao/x11/versionx11.h"

#if TAOX11_MAJOR_VERSION != 1 || TAOX11_MINOR_VERSION != 8 || TAOX11_MICRO_VERSION != 1
#error This file was generated with another RIDL C++11 backend version (1.8.1). Please re-generate.
#endif

// generated from ServantHeaderWriter#enter_module
namespace Test
{
  // generated from c++11/templates/srv/hdr/interface_pre
  namespace POA
  {
    class Foo_srvproxy;
    using Foo_srvproxy_ptr = Foo_srvproxy*;

    class Foo
      : public virtual TAOX11_NAMESPACE::PortableServer::Servant
    {
    public:
      /// @name Member types
      //@{
      using _traits_type = TAOX11_CORBA::servant_traits<Foo>;
      using _ref_type = TAOX11_CORBA::servant_reference<Foo>;
      //@}

    protected:
      explicit Foo (bool inherited = false);
      ~Foo () override;

      Servant_proxy_ptr get_proxy () const override;

      template <typename T> friend class TAOX11_CORBA::servant_reference;
    public:
      /// Determine if we are of the type specified by the @a logical_type_id.
      bool _is_a (const std::string& logical_type_id) override;

      /// Returns a strong client reference for the servant you are calling
      IDL::traits< ::Test::Foo>::ref_type _this ();

      const std::string &_interface_repository_id () const override;

      // generated from c++11/templates/srv/hdr/operation
      /// @copydoc test.idl::Test::Foo::do_it
      virtual void
      do_it () = 0;

      // generated from c++11/templates/srv/hdr/attribute
      /// @copydoc test.idl::Test::Foo::a_number
      virtual int32_t
      a_number () = 0;

      // generated from c++11/templates/srv/hdr/attribute
      /// @copydoc test.idl::Test::Foo::a_string
      virtual std::string
      a_string () = 0;

      /// @copydoc test.idl::Test::Foo::a_string
      virtual void
      a_string (const std::string& _v) = 0;

      // generated from c++11/templates/srv/hdr/operation
      /// @copydoc test.idl::Test::Foo::shutdown
      virtual void
      shutdown () = 0;
    private:
      // generated from c++11/templates/srv/hdr/interface_post
      /** @name Illegal to be called. Deleted explicitly to let the compiler detect any violation */
      //@{
      Foo (const Foo&) = delete;
      Foo (Foo&&) = delete;
      Foo& operator= (const Foo&) = delete;
      Foo& operator= (Foo&&) = delete;
      //@}
      friend class POA::Foo_srvproxy;

      POA::Foo_srvproxy_ptr foo_srvproxy_{};
    };
  } // namespace POA
} // namespace Test


// generated from ServantHeaderSrvTraitsWriter#pre_visit
namespace TAOX11_NAMESPACE {
  namespace CORBA {

    // generated from c++11/templates/srv/hdr/interface_servant_traits
    template <>
    struct servant_traits<::Test::Foo>
    {
      /// Base trait type from which the servant implementations has to be derived
      /// from
      using base_type = ::Test::POA::Foo;
      /// Strong reference type
      using ref_type = TAOX11_CORBA::servant_reference<::Test::POA::Foo>;
      /// Weak reference type
      using weak_ref_type = TAOX11_CORBA::weak_servant_reference<::Test::POA::Foo>;
      /// Try to narrow the provided reference @a base to a ::Test::Foo
      /// reference. Returns a new reference when this succeeds, a nil reference
      /// when this fails. Narrowing a nil reference will return a nil reference.
      template <typename _Tp1, typename = typename
          std::enable_if<std::is_convertible<::Test::POA::Foo*, _Tp1*>::value>::type>
      static ref_type narrow (servant_reference<_Tp1> base)
      {
        return ref_type::_narrow (std::move(base));
      }
    };
  } // namespace CORBA
} // namespace TAOX11_NAMESPACE

#endif /* __RIDL_TESTS_H_BGGJCGGA_INCLUDED__ */

// -*- END -*-

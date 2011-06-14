// $Id$
#include "Hello.h"

Hello_Factory::Hello_Factory (CORBA::ORB_ptr orb, PortableServer::POA_ptr poa)
 : orb_ (CORBA::ORB::_duplicate (orb)),
   poa_ (PortableServer::POA::_duplicate (poa))
{
}

::Test::Hello_ptr
Hello_Factory::get_hello (void)
{
  Hello *hello_impl = 0;
  ACE_NEW_NORETURN (hello_impl,
                  Hello (this->orb_.in ()));
  PortableServer::ServantBase_var owner_transfer(hello_impl);

  PortableServer::ObjectId_var id =
      this->poa_->activate_object (hello_impl);

  CORBA::Object_var object = this->poa_->id_to_reference (id.in ());

  Test::Hello_var hello = Test::Hello::_narrow (object.in ());

  return hello._retn ();
}

void
Hello_Factory::get_hello_2 (::Test::Hello_out hello_obj)
{
  Hello *hello_impl = 0;
  ACE_NEW_NORETURN (hello_impl,
                  Hello (this->orb_.in ()));
  PortableServer::ServantBase_var owner_transfer(hello_impl);

  PortableServer::ObjectId_var id =
      this->poa_->activate_object (hello_impl);

  CORBA::Object_var object = this->poa_->id_to_reference (id.in ());

  hello_obj = Test::Hello::_narrow (object.in ());
}

Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

char *
Hello::get_string (void)
{
  return CORBA::string_dup ("Hello there!");
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
}

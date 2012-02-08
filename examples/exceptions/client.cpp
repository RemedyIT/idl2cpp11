/*--------------------------------------------------------------------
 * client.cpp - CORBA C++11 client application
 *
 * Author: Martin Corino
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#include "testC.h"
#include <iostream>

int main(int argc, char* argv[])
{
  try
    {
      CORBA::object_reference<CORBA::ORB> _orb = CORBA::ORB_init (argc, argv);

      if (_orb == nullptr)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned null ORB." << std::endl;
        exit (1);
      }

      CORBA::object_reference<CORBA::Object> obj = _orb->string_to_object ("file://test.ior");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: string_to_object(<ior>) returned null reference." << std::endl;
        exit (1);
      }

      std::cout << "retrieved object reference" << std::endl;

      CORBA::object_reference<Test::Foo> foo = Test::Foo::narrow (obj);

      if (!foo)
      {
        std::cerr << "ERROR: Test::Foo::narrow (obj) returned null object." << std::endl;
        exit (1);
      }

      std::cout << "narrowed Foo interface" << std::endl;

      try {
        foo->do_it ();

        std::cerr << "ERROR: Test::Foo::do_it() returned without throwing exception!" << std::endl;
        exit (1);
      } catch (const Test::FooEx &x) {
        std::cout << "successfully caught expected exception" << std::endl;
        std::cout << x << "; message = " << x.message () << std::endl;
      }

      try {
        uint32_t num = foo->a_number ();

        std::cerr << "ERROR: Test::Foo::a_number() returned without throwing exception! " << num << std::endl;
        exit (1);
      } catch (const Test::BooEx &x) {
        std::cout << "successfully caught expected exception" << std::endl;
        std::cout << x << "; id = " << x.id () << std::endl;
      }

      try {
        std::string str = foo->a_string ();
        std::cout << "successfully called Test::Foo::a_string (); a_string = " << str << std::endl;
      } catch (const CORBA::Exception &x) {
        std::cerr << "ERROR: caught unexpected exception after calling Test::Foo::a_string ()" << std::endl;
        std::cerr << x << std::endl;
        exit (1);
      }

      try {
        foo->a_string ("bye bye");

        std::cerr << "ERROR: Test::Foo::a_string(\"bye bye\") returned without throwing exception!" << std::endl;
        exit (1);
      } catch (const Test::BooEx &x) {
        std::cout << "successfully caught expected exception" << std::endl;
        std::cout << x << "; id = " << x.id () << std::endl;
      } catch (const Test::FooEx &x) {
        std::cout << "successfully caught expected exception" << std::endl;
        std::cout << x << "; message = " << x.message () << std::endl;
      }

      try {
        foo->do_it ();

        std::cerr << "ERROR: Test::Foo::do_it() returned without throwing exception!" << std::endl;
        exit (1);
      } catch (const std::exception &x) {
        std::cout << "successfully caught expected exception as std::exception base: "
                  << x.what () << std::endl;
      }

      std::cout << "shutting down...";

      foo->shutdown ();

      std::cout << std::endl;
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
    }
  return 0;
}

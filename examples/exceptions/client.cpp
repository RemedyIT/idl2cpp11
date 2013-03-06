/*!
 * @file   client.cpp
 * @author
 *
 * @brief  CORBA C++11 client application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "testC.h"
#include <iostream>

int main(int argc, char* argv[])
{
  try
    {
      IDL::traits<CORBA::ORB>::ref_type _orb = CORBA::ORB_init (argc, argv);

      if (_orb == nullptr)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned nil ORB." << std::endl;
        return 1;
      }

      IDL::traits<CORBA::Object>::ref_type obj = _orb->string_to_object ("file://test.ior");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: string_to_object(<ior>) returned nil reference." << std::endl;
        return 1;
      }

      std::cout << "retrieved object reference" << std::endl;

      IDL::traits<Test::Foo>::ref_type foo = IDL::traits<Test::Foo>::narrow (obj);

      if (!foo)
      {
        std::cerr << "ERROR: IDL::traits<Test::Foo>::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed Foo interface" << std::endl;

      try {
        foo->do_it ();

        std::cerr << "ERROR: Test::Foo::do_it() returned without throwing exception!" << std::endl;
        return 1;
      } catch (const Test::FooEx &x) {
        std::cout << "successfully caught expected exception" << std::endl;
        std::cout << x << "; message = " << x.message () << std::endl;
      }

      try {
        uint32_t num = foo->a_number ();

        std::cerr << "ERROR: Test::Foo::a_number() returned without throwing exception! " << num << std::endl;
        return 1;
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
        return 1;
      }

      try {
        foo->a_string ("bye bye");

        std::cerr << "ERROR: Test::Foo::a_string(\"bye bye\") returned without throwing exception!" << std::endl;
        return 1;
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
        return 1;
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

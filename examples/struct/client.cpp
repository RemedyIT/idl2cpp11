/*--------------------------------------------------------------------
 * client.cpp - CORBA C++11 client application
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#include "testC.h"
#include <iostream>

void dump(const Test::Simple& s)
{
  std::cout << "Simple ("
            << s.o () << ", "
            << s.l () << ", "
            << s.s () << ", "
            << s.d () << ", "
            << s.b () << ", "
            << s.c () << ")";
}

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

      IDL::traits<Test::Foo>::ref_type foo = Test::Foo::_narrow (obj);

      if (!foo)
      {
        std::cerr << "ERROR: Test::Foo::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed Foo interface" << std::endl;

      CORBA::object_reference<Test::Bar> bar;
      Test::Variable v;
      Test::Simple simple (32, 12345, "test", 3.45, true, 'A', bar, v);

      if (!foo->pass_struct(simple))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        return 1;
      }

      std::cout << "successfully called Foo::pass_struct ("; dump (simple); std::cout << ")" << std::endl;

      // Not a copy here but a move!
      Test::Simple simple2 = foo->return_struct();

      std::cout << "successfully called Foo::return_struct() => "; dump (simple2); std::cout << std::endl;

      Test::Simple simple3;

      if (!foo->get_struct(simple3))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        return 1;
      }

      std::cout << "successfully called Foo::get_struct ("; dump (simple3); std::cout << ")" << std::endl;

      // This is a copy (as intended).
      Test::Simple simple4 (simple3);

      // NOTE: just passed (and returned) by reference!
      if (!foo->update_struct(simple4))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        return 1;
      }

      std::cout << "successfully called Foo::update_struct ("; dump (simple3); std::cout << ") => "; dump (simple4); std::cout << std::endl;

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

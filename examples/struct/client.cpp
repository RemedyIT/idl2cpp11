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

void dump(const Test::Simple& s)
{
  std::cout << "Simple ("
            << (int)s.o () << ", "
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
      CORBA::ORB _orb = CORBA::ORB_init (argc, argv);

      if (_orb == nullptr)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned null ORB." << std::endl;
        exit (1);
      }

      CORBA::Object obj = _orb->string_to_object ("file://test.ior");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: string_to_object(<ior>) returned null reference." << std::endl;
        exit (1);
      }

      std::cout << "retrieved object reference" << std::endl;

      Test::Foo foo = Test::Foo::narrow (obj);

      if (!foo)
      {
        std::cerr << "ERROR: Test::Foo::narrow (obj) returned null object." << std::endl;
        exit (1);
      }

      std::cout << "narrowed Foo interface" << std::endl;

      Test::Simple simple (32, 12345, "test", 3.45, true, 'A');

      if (!foo->pass_struct(simple))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        exit (1);
      }

      std::cout << "successfully called Foo::pass_struct ("; dump (simple); std::cout << ")" << std::endl;

      // Not a copy here but a move!
      Test::Simple simple2 = foo->return_struct();

      std::cout << "successfully called Foo::return_struct() => "; dump (simple2); std::cout << std::endl;

      Test::Simple simple3;

      if (!foo->get_struct(simple3))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        exit (1);
      }

      std::cout << "successfully called Foo::get_struct ("; dump (simple3); std::cout << ")" << std::endl;

      // This is a copy (as intended).
      Test::Simple simple4 (simple3);

      // NOTE: just passed (and returned) by reference!
      if (!foo->update_struct(simple4))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        exit (1);
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

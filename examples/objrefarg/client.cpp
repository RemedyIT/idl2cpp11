/*!
 * @file   client.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 client application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
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

      IDL::traits<Test::Hello_Factory>::ref_type hello_factory = IDL::traits<Test::Hello_Factory>::narrow (obj);

      if (hello_factory == nullptr)
      {
        std::cerr << "ERROR: IDL::traits<Test::Hello_Factory>::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed Hello_Factory interface" << std::endl;

      IDL::traits<Test::Hello>::ref_type hello = hello_factory->get_hello ();

      if (hello == nullptr)
      {
        std::cerr << "ERROR: Test::Hello_Factory::get_hello () returned nil object." << std::endl;
        return 1;
      }

      std::cout << "hello->get_string () returned " << hello->get_string () << std::endl;

      IDL::traits<Test::Hello>::ref_type hello_2;
      hello_factory->get_hello_2 (hello_2);

      if (hello_2 == nullptr)
      {
        std::cerr << "ERROR: Test::Hello_Factory::get_hello_2 () returned nil object." << std::endl;
        return 1;
      }

      std::cout << "shutting down...";

      hello_2->shutdown ();

      std::cout << std::endl;
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
    }
  return 0;
}

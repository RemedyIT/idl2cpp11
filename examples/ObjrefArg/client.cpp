
#include "TestC.h"

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

      CORBA::object_reference<Test::Hello_Factory> hello_factory = Test::Hello_Factory::narrow (obj);

      if (hello_factory == nullptr)
      {
        std::cerr << "ERROR: Test::Hello::narrow (obj) returned null object." << std::endl;
        exit (1);
      }

      std::cout << "narrowed Hello_Factory interface" << std::endl;

      CORBA::object_reference<Test::Hello> hello = hello_factory->get_hello ();

      if (hello == nullptr)
      {
        std::cerr << "ERROR: Test::Hello_Factory::get_hello () returned null object." << std::endl;
        exit (1);
      }

      std::cout << "hello->get_string () returned " << hello->get_string () << std::endl;

      CORBA::object_reference<Test::Hello> hello_2;
      hello_factory->get_hello_2 (hello_2);

      if (hello_2 == nullptr)
      {
        std::cerr << "ERROR: Test::Hello_Factory::get_hello_2 () returned null object." << std::endl;
        exit (1);
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

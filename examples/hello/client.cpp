/*--------------------------------------------------------------------
 * client.cpp - CORBA C++11 client application
 *
 * Author: Martin Corino
 *
 * $Id$
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

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

      Test::Hello::_ref_type hello = Test::Hello::narrow (obj);

      if (!hello)
      {
        std::cerr << "ERROR: Test::Hello::narrow (obj) returned null object." << std::endl;
        exit (1);
      }

      std::cout << "narrowed Hello interface" << std::endl;

      std::cout << "hello->get_string () returned " << hello->get_string () << std::endl;

      std::cout << "shutting down...";

      hello->shutdown ();

      std::cout << std::endl;
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
    }
  return 0;
}

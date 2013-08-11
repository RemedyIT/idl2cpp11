/*!
 * @file   client.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  C++11 client application
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
      auto orb = CORBA::ORB_init (argc, argv);
      auto obj = orb->string_to_object ("file://test.ior");

      std::cout << "retrieved object reference" << std::endl;

      auto hello = IDL::traits<Test::Hello>::narrow (obj);

      std::cout << "narrowed Hello interface" << std::endl;

      std::cout << "hello->get_string () returned " << hello->get_string () << std::endl;

      std::cout << "shutting down the server...";

      hello->shutdown ();

      std::cout << std::endl;
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
    }
  return 0;
}

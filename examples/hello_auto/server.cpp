/*!
 * @file   server.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 server application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#include "hello.h"

#include <iostream>
#include <fstream>

int
main(int argc, ACE_TCHAR *argv[])
{
  try
    {
      auto _orb = CORBA::ORB_init (argc, argv);

      if (_orb == nullptr)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned nil ORB." << std::endl;
        return 1;
      }

      auto obj = _orb->resolve_initial_references ("RootPOA");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: resolve_initial_references (\"RootPOA\") returned nil reference." << std::endl;
        return 1;
      }

      std::cout << "retrieved RootPOA object reference" << std::endl;

      auto root_poa = IDL::traits<PortableServer::POA>::narrow (obj);

      if (!root_poa)
      {
        std::cerr << "ERROR: PortableServer::POA::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed POA interface" << std::endl;

      auto poaman = root_poa->the_POAManager ();

      if (!poaman)
      {
        std::cerr << "ERROR: root_poa->the_POAManager () returned nil object." << std::endl;
        return 1;
      }

      auto hello_impl =
        CORBA::make_reference <Hello> (_orb);

      std::cout << "created Hello servant" << std::endl;

      auto id = root_poa->activate_object (hello_impl);

      std::cout << "activated Hello servant" << std::endl;

      auto hello_obj = root_poa->id_to_reference (id);

      if (!hello_obj)
      {
        std::cerr << "ERROR: root_poa->id_to_reference (id) returned nil reference." << std::endl;
        return 1;
      }

      auto hello = IDL::traits<Test::Hello>::narrow (hello_obj);

      auto ior = _orb->object_to_string (hello);

      // Output the IOR to the <ior_output_file>
      std::ofstream fos("test.ior");
      if (!fos)
      {
        std::cerr << "ERROR: failed to open file 'test.ior'" << std::endl;
        return 1;
      }
      fos << ior;
      fos.close ();

      std::cout << "IOR for Hello servant written to 'test.ior' : " << ior << std::endl;

      poaman->activate ();

      std::cout << "starting event loop" << std::endl;

      _orb->run ();

      std::cout << "event loop finished" << std::endl;

      root_poa->destroy (true, true);

      _orb->destroy ();
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
      return 1;
    }

  return 0;
}

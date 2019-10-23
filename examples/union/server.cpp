/*!
 * @file   server.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 server application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */

#include "foo.h"
#include <iostream>
#include <fstream>

int
main(int argc, ACE_TCHAR *argv[])
{
  try
    {
      IDL::traits<CORBA::ORB>::ref_type _orb = CORBA::ORB_init (argc, argv);

      if (_orb == nullptr)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned nil ORB." << std::endl;
        return 1;
      }

      IDL::traits<CORBA::Object>::ref_type obj = _orb->resolve_initial_references ("RootPOA");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: resolve_initial_references (\"RootPOA\") returned nil reference." << std::endl;
        return 1;
      }

      std::cout << "retrieved RootPOA object reference" << std::endl;

      IDL::traits<PortableServer::POA>::ref_type root_poa = IDL::traits<PortableServer::POA>::narrow (obj);

      if (!root_poa)
      {
        std::cerr << "ERROR: PortableServer::POA::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed POA interface" << std::endl;

      IDL::traits<PortableServer::POAManager>::ref_type poaman = root_poa->the_POAManager ();

      if (!poaman)
      {
        std::cerr << "ERROR: root_poa->the_POAManager () returned nil object." << std::endl;
        return 1;
      }

      CORBA::servant_traits<Test::Foo>::ref_type hello_impl =
        CORBA::make_reference <Foo> (_orb);

      std::cout << "created Foo servant" << std::endl;

      PortableServer::ObjectId id = root_poa->activate_object (hello_impl);

      std::cout << "activated Foo servant" << std::endl;

      IDL::traits<CORBA::Object>::ref_type hello_obj = root_poa->id_to_reference (id);

      if (hello_obj == nullptr)
      {
        std::cerr << "ERROR: root_poa->id_to_reference (id) returned nil reference." << std::endl;
        return 1;
      }

      IDL::traits<Test::Foo>::ref_type hello = IDL::traits<Test::Foo>::narrow (hello_obj);

      if (hello == nullptr)
      {
        std::cerr << "ERROR: IDL::traits<Test::Foo>::narrow (hello_obj) returned nil reference." << std::endl;
        return 1;
      }

      std::string ior = _orb->object_to_string (hello);

      // Output the IOR to the <ior_output_file>
      std::ofstream fos("test.ior");
      if (!fos)
      {
        std::cerr << "ERROR: failed to open file 'test.ior'" << std::endl;
        return 1;
      }
      fos << ior;
      fos.close ();

      std::cout << "IOR for Foo servant written to 'test.ior' : " << ior << std::endl;

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

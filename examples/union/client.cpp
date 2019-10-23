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

void dump(const Test::Data& d)
{
  std::cout << "Data (";
  switch (d._d ())
  {
    case Test::DataType::dtEmpty:
      std::cout << "dtEmpty";
      break;
    case Test::DataType::dtLong:
      std::cout << "dtLong, ";
      std::cout << d.longData ();
      break;
    case Test::DataType::dtShort:
      std::cout << "dtShort, ";
      std::cout << d.shortData ();
      break;
    case Test::DataType::dtString:
      std::cout << "dtString, ";
      std::cout << d.stringData ();
      break;
    case Test::DataType::dtPoint:
      std::cout << "dtPoint, Point("
                << d.pointData ().x () << ","
                << d.pointData ().y () << ")";
      break;
    case Test::DataType::dtTrack:
      std::cout << "dtTrack, Track ("
                << d.trackData ().id () << ", Point("
                << d.trackData ().p ().x () << ","
                << d.trackData ().p ().y () << "))";
      break;
    case Test::DataType::dtGlobal:
      std::cout << "dtGlobal, ";
      std::cout << "dtPoint, Global("
                << d.pointData ().x () << ")";
      break;
  }
  std::cout << ")";
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

      IDL::traits<Test::Foo>::ref_type foo = IDL::traits<Test::Foo>::narrow (obj);

      if (!foo)
      {
        std::cerr << "ERROR: IDL::traits<Test::Foo>::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed Foo interface" << std::endl;

      Test::Data data;
      data._default ();

      if (!foo->pass_union(data))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        return 1;
      }

      std::cout << "successfully called Foo::pass_union ("; dump (data); std::cout << ")" << std::endl;

      // Not a copy here but a move!
      Test::Data data2 = foo->return_union();

      std::cout << "successfully called Foo::return_union() => "; dump (data2); std::cout << std::endl;

      Test::Data data3;

      if (!foo->get_union(data3))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        return 1;
      }

      std::cout << "successfully called Foo::get_union ("; dump (data3); std::cout << ")" << std::endl;

      // This is a copy (as intended).
      Test::Data data4 (data3);

      // NOTE: just passed (and returned) by reference!
      if (!foo->update_union(data4))
      {
        std::cerr << "ERROR: Test::Foo call failed." << std::endl;
        return 1;
      }

      std::cout << "successfully called Foo::update_union ("; dump (data3); std::cout << ") => "; dump (data4); std::cout << std::endl;

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

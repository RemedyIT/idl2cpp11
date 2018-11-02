/*!
 * @file   hello.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 client application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */
#include "hello.h"

Hello::Hello (IDL::traits<CORBA::ORB>::ref_type orb)
  : orb_ (std::move(orb))
{
}

std::string
Hello::get_string (void)
{
  return "Hello there!";
}

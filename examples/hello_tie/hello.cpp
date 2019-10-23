/*!
 * @file   hello.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 Test::Hello implementation source
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#include "hello.h"

Hello::Hello (IDL::traits<CORBA::ORB>::ref_type orb)
  : orb_ (std::move(orb))
{
}

std::string
Hello::get_string ()
{
  return "Hello there!";
}

void
Hello::shutdown ()
{
  this->orb_->shutdown (false);
}

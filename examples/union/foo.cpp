/*!
 * @file   foo.cpp
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */

#include "foo.h"

Foo::Foo (IDL::traits<CORBA::ORB>::ref_type orb)
  : orb_ (orb)
{
}

bool
Foo::pass_union (const Test::Data & s)
{
  this->s_ = s;
  this->s_.longData (123456);
  return true;
}

Test::Data
Foo::return_union (void)
{
  return this->s_;
}

bool
Foo::get_union (Test::Data & s)
{
  s = this->s_;
  s.pointData ( Test::Point (10, 56));
  return true;
}

bool
Foo::update_union (Test::Data & s)
{
  s = this->s_;
  s.trackData (Test::Track (99, Test::Point (23, 77)));
  return true;
}

void
Foo::shutdown (void)
{
  this->orb_->shutdown (0);
}

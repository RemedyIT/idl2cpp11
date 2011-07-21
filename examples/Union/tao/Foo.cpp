// $Id$
#include "Foo.h"

Foo::Foo (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

bool
Foo::pass_union (const Test::Data & s)
{
  this->s_ = s;
  this->s_.longData (123456);
  return true;
}

Test::Data *
Foo::return_union (void)
{
  return new Test::Data (this->s_);
}

bool
Foo::get_union (Test::Data_out s)
{
  s = new Test::Data (this->s_);
  Test::Point p = {10, 56};
  s->pointData (p);
  return true;
}

bool
Foo::update_union (Test::Data & s)
{
  s = this->s_;
  Test::Track t = { 99, {23, 77} };
  s.trackData (t);
  return true;
}

void
Foo::shutdown (void)
{
  this->orb_->shutdown (0);
}

// $Id$
#include "Foo.h"

Foo::Foo (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

::CORBA::Boolean
Foo::pass_struct (const ::Test::Simple & s)
{
  this->s_ = s;
  return true;
}

::Test::Simple *
Foo::return_struct (void)
{
  return new Test::Simple (this->s_);
}

::CORBA::Boolean
Foo::get_struct (::Test::Simple_out s)
{
  s = new Test::Simple (this->s_);
  return true;
}

::CORBA::Boolean
Foo::update_struct (::Test::Simple & s)
{
  s = this->s_;
  s.b = false;
  s.l *= 2;
  s.d *= 3;
  return true;
}

void
Foo::shutdown (void)
{
  this->orb_->shutdown (0);
}

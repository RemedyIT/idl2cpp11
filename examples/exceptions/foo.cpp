/*--------------------------------------------------------------------
 * foo.cpp - CORBA C++11 client application
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/
#include "foo.h"

Foo::Foo (CORBA::object_reference<CORBA::ORB> orb)
  : orb_ (orb)
{
}

void Foo::do_it ()
{
  throw Test::FooEx ("Hello world!");
}

int32_t Foo::a_number(void)
{
  throw Test::BooEx (999);
}

std::string Foo::a_string(void)
{
  return "This is a string";
}
void Foo::a_string(const std::string& /*_v*/)
{
  throw Test::BooEx (777);
}

void
Foo::shutdown (void)
{
  this->orb_->shutdown (0);
}

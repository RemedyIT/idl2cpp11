// $Id$
#include "Hello.h"

Hello::Hello (CORBA::ORB orb)
  : orb_ (orb)
{
}

std::string
Hello::get_string (void)
{
  return "Hello there!";
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (false);
}

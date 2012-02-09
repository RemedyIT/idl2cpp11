/*--------------------------------------------------------------------
 * foo.h - CORBA C++11
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#include "testC.h"

class Foo_impl : public virtual Test::Foo
{
public:
  virtual void do_something (void) override;
};

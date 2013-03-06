/*!
 * @file   foo.h
 * @author
 *
 * @brief  CORBA C++11
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "testC.h"

class Foo_impl : public virtual Test::Foo
{
public:
  virtual void do_something (void) override;
};

/*!
 * @file   foo.h
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */

#include "testC.h"

class Foo_impl : public virtual IDL::traits<Test::Foo>::base_type
{
public:
  void do_something (void) override;
};

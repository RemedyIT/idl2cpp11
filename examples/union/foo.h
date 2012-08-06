/*--------------------------------------------------------------------
 * foo.h - CORBA C++11
 *
 * Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 --------------------------------------------------------------------*/

#ifndef FOO_H
#define FOO_H
#include /**/ "ace/pre.h"

#include "testS.h"

/// Implement the Test::Foo interface
class Foo : public virtual CORBA::servant_traits<Test::Foo>::base_type
{
public:
  /// Constructor
  Foo (IDL::traits<CORBA::ORB>::ref_type orb);

  // = The skeleton methods
  virtual bool pass_union (const Test::Data & s);

  virtual Test::Data return_union (void);

  virtual bool get_union (Test::Data & s);

  virtual bool update_union (Test::Data & s);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  IDL::traits<CORBA::ORB>::ref_type orb_;
  Test::Data s_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */

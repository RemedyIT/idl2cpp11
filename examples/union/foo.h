//
// $Id$
//

#ifndef FOO_H
#define FOO_H
#include /**/ "ace/pre.h"

#include "testS.h"

/// Implement the Test::Foo interface
class Foo
  : public virtual CORBA::servant_traits<Test::Foo>::base_type
{
public:
  /// Constructor
  Foo (CORBA::object_reference<CORBA::ORB> orb);

  // = The skeleton methods
  virtual bool pass_union (const Test::Data & s);

  virtual Test::Data return_union (void);

  virtual bool get_union (Test::Data & s);

  virtual bool update_union (Test::Data & s);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::object_reference<CORBA::ORB> orb_;
  Test::Data s_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */

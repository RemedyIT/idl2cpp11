//
// $Id$
//

#ifndef FOO_H
#define FOO_H
#include /**/ "ace/pre.h"

#include "TestS.h"

/// Implement the Test::Hello interface
class Foo
  : public virtual POA_Test::Foo
{
public:
  /// Constructor
  Foo (CORBA::ORB_ptr orb);

  // = The skeleton methods
  virtual ::CORBA::Boolean pass_struct (const ::Test::Simple & s);

  virtual ::Test::Simple * return_struct (void);

  virtual ::CORBA::Boolean get_struct (::Test::Simple_out s);

  virtual ::CORBA::Boolean update_struct (::Test::Simple & s);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to conver strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
  Test::Simple s_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */

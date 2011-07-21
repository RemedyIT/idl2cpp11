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
  virtual bool pass_union (const Test::Data & s);

  virtual Test::Data * return_union (void);

  virtual bool get_union (Test::Data_out s);

  virtual bool update_union (Test::Data & s);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to conver strings to objects and shutdown
  /// the application.
  CORBA::ORB_var orb_;
  Test::Data s_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */

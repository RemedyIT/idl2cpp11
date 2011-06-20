//
// $Id$
//

#ifndef HELLO_H
#define HELLO_H
#include /**/ "ace/pre.h"

#include "TestS.h"

/// Implement the Test::Hello interface
class Hello
  : public virtual Test::Hello::servant_base_type
{
public:
  /// Constructor
  Hello (CORBA::ORB orb);

  // = The skeleton methods
  virtual std::string get_string (void);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to conver strings to objects and shutdown
  /// the application.
  CORBA::ORB orb_;
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */

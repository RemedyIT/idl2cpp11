//
// $Id$
//

#ifndef HELLO_H
#define HELLO_H
#include /**/ "ace/pre.h"

#include "testS.h"

/// Implement the Test::Hello interface
class Hello
  : public virtual CORBA::servant_traits<Test::Hello>::base_type
{
public:
  /// Constructor
  Hello (CORBA::object_reference<CORBA::ORB> orb);

  // = The skeleton methods
  virtual std::string get_string (void) override;

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::object_reference<CORBA::ORB> orb_;
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */

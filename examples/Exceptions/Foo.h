//
// $Id$
//

#ifndef FOO_H
#define FOO_H
#include /**/ "ace/pre.h"

#include "TestS.h"

/// Implement the Test::Hello interface
class Foo
  : public virtual Test::Foo::servant_base_type
{
public:
  /// Constructor
  Foo (CORBA::ORB orb);

  // = The skeleton methods
  virtual void do_it ();

  virtual int32_t a_number(void);

  virtual std::string a_string(void);
  virtual void a_string(const std::string& _v);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  CORBA::ORB orb_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */

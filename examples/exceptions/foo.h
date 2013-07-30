/*!
 * @file   foo.h
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 client application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */
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
  virtual void do_it ();

  virtual int32_t a_number(void);

  virtual std::string a_string(void);
  virtual void a_string(const std::string& _v);

  virtual void shutdown (void);

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  IDL::traits<CORBA::ORB>::ref_type orb_;
};

#include /**/ "ace/post.h"
#endif /* FOO_H */

/*!
 * @file   hello.h
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 Test::Hello servant implementation header
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
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
  Hello (IDL::traits<CORBA::ORB>::ref_type orb);

  // = The skeleton methods
  std::string get_string (void) override;

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  IDL::traits<CORBA::ORB>::ref_type orb_;
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */

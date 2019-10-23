/*!
 * @file   hello.h
 * @author Johnny Willemsen <jwillemsen@remedy.nl>
 *
 * @brief  CORBA C++11 Test::Hello implementation header
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 */
#ifndef HELLO_H
#define HELLO_H
#include /**/ "ace/pre.h"

#include "tao/x11/orb.h"

/// Regular class used through delegation
class Hello final
{
public:
  /// Constructor
  Hello (IDL::traits<CORBA::ORB>::ref_type orb);

  // = The skeleton methods
  virtual std::string get_string () override;

  virtual void shutdown () override;

private:
  /// Use an ORB reference to convert strings to objects and shutdown
  /// the application.
  IDL::traits<CORBA::ORB>::ref_type orb_;
};

#include /**/ "ace/post.h"
#endif /* HELLO_H */

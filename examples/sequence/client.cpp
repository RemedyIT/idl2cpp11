/*!
 * @file   client.cpp
 * @author
 *
 * @brief  CORBA C++11 client application
 *
 * @copyright Copyright (c) Remedy IT Expertise BV
 * Chamber of commerce Rotterdam nr.276339, The Netherlands
 */

#include "testC.h"
#include <iostream>

template <typename T>
void dump(const T& v)
{
}

template <>
void dump(const int32_t& i)
{
  std::cout << "int32_t (" << i << ")";
}

template <>
void dump(const bool& b)
{
  std::cout << "bool (" << b << ")";
}

template <>
void dump(const std::string& s)
{
  std::cout << "std::string (\"" << s << "\")";
}

template <>
void dump(const Test::Simple& s)
{
  std::cout << "Simple ("
            << (int)s.o () << ", "
            << s.l () << ", "
            << '"' << s.s () << "\", "
            << s.d () << ", "
            << s.b () << ", "
            << s.c () << ")";
}

template <typename T>
void dump(const std::vector<T>& v)
{
  std::cout << "[ ";
  for (const T &el : v)
  {
    dump(el);
    std::cout << ", ";
  }
  std::cout << " ]";
}

int main(int argc, char* argv[])
{
  try
    {
      IDL::traits<CORBA::ORB>::ref_type _orb = CORBA::ORB_init (argc, argv);

      if (_orb == nullptr)
      {
        std::cerr << "ERROR: CORBA::ORB_init (argc, argv) returned nil ORB." << std::endl;
        return 1;
      }

      IDL::traits<CORBA::Object>::ref_type obj = _orb->string_to_object ("file://test.ior");

      if (obj == nullptr)
      {
        std::cerr << "ERROR: string_to_object(<ior>) returned nil reference." << std::endl;
        return 1;
      }

      std::cout << "retrieved object reference" << std::endl;

      IDL::traits<Test::Foo>::ref_type foo = IDL::traits<Test::Foo>::narrow (obj);

      if (!foo)
      {
        std::cerr << "ERROR: IDL::traits<Test::Foo>::narrow (obj) returned nil object." << std::endl;
        return 1;
      }

      std::cout << "narrowed Foo interface" << std::endl;

      Test::LongSeq lseq;
      Test::LongSeq lseq2;
      for (int i=0; i<10 ;++i)
      {
        lseq.push_back(i);
        lseq2.push_back(i*3);
      }

      Test::LongSeq lseq3;
      Test::LongSeq lseq4;

      std::cout << "calling Foo::test_long_seq () with:" << std::endl
                << "lseq = "; dump(lseq); std::cout << std::endl
                << "lseq2 = "; dump(lseq2); std::cout << std::endl;

      lseq3 = foo->test_long_seq (lseq, lseq2, lseq4);

      std::cout << "returned from Foo::test_long_seq () with:" << std::endl
                << "lseq = "; dump(lseq); std::cout << std::endl
                << "lseq2 = "; dump(lseq2); std::cout << std::endl
                << "lseq3 = "; dump(lseq3); std::cout << std::endl
                << "lseq4 = "; dump(lseq4); std::cout << std::endl;

      Test::BoolSeq bseq;
      Test::BoolSeq bseq2;
      for (int i=0; i<10 ;++i)
      {
        bseq.push_back(true);
        bseq2.push_back(false);
      }

      Test::BoolSeq bseq3;
      Test::BoolSeq bseq4;

      std::cout << "calling Foo::test_bool_seq () with:" << std::endl
                << "bseq = "; dump(bseq); std::cout << std::endl
                << "bseq2 = "; dump(bseq2); std::cout << std::endl;

      bseq3 = foo->test_bool_seq (bseq, bseq2, bseq4);

      std::cout << "returned from Foo::test_bool_seq () with:" << std::endl
                << "bseq = "; dump(bseq); std::cout << std::endl
                << "bseq2 = "; dump(bseq2); std::cout << std::endl
                << "bseq3 = "; dump(bseq3); std::cout << std::endl
                << "bseq4 = "; dump(bseq4); std::cout << std::endl;

      std::string s1, s2;
      Test::StringSeq strseq;
      Test::StringSeq strseq2;
      for (int i=0; i<10 ;++i)
      {
        s1 += '*';
        strseq.push_back(s1);
        s2 += '-';
        strseq2.push_back(s2);
      }

      Test::StringSeq strseq3;
      Test::StringSeq strseq4;

      std::cout << "calling Foo::test_string_seq () with:" << std::endl
                << "strseq = "; dump(strseq); std::cout << std::endl
                << "strseq2 = "; dump(strseq2); std::cout << std::endl;

      strseq3 = foo->test_string_seq (strseq, strseq2, strseq4);

      std::cout << "returned from Foo::test_string_seq () with:" << std::endl
                << "strseq = "; dump(strseq); std::cout << std::endl
                << "strseq2 = "; dump(strseq2); std::cout << std::endl
                << "strseq3 = "; dump(strseq3); std::cout << std::endl
                << "strseq4 = "; dump(strseq4); std::cout << std::endl;

      Test::SimpleSeq sseq;
      Test::SimpleSeq sseq2;
      for (int i=0; i<10 ;++i)
      {
        Test::Simple simple (32+i, 123*i, "test", 3333.45/(i+1), true, 'A');
        sseq.push_back (simple);
        sseq2.insert (sseq2.begin (), simple);
      }

      Test::SimpleSeq sseq3;
      Test::SimpleSeq sseq4;

      std::cout << "calling Foo::test_struct_seq () with:" << std::endl
                << "sseq = "; dump(sseq); std::cout << std::endl
                << "sseq2 = "; dump(sseq2); std::cout << std::endl;

      sseq3 = foo->test_struct_seq (sseq, sseq2, sseq4);

      std::cout << "returned from Foo::test_struct_seq () with:" << std::endl
                << "sseq = "; dump(sseq); std::cout << std::endl
                << "sseq2 = "; dump(sseq2); std::cout << std::endl
                << "sseq3 = "; dump(sseq3); std::cout << std::endl
                << "sseq4 = "; dump(sseq4); std::cout << std::endl;

      std::cout << "shutting down...";

      foo->shutdown ();

      std::cout << std::endl;
    }
  catch (const std::exception& e)
    {
      std::cerr << "exception caught: " << e.what() << std::endl;
    }
  return 0;
}

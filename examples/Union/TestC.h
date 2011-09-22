// -*- C++ -*-
/*
 * ****  Code generated by the RIDL Compiler ****
 * RIDL has been developed by:
 *        Remedy IT
 *        Nijkerk, GLD
 *        The Netherlands
 *        http://www.remedy.nl \ http://www.theaceorb.nl
 */

#ifndef __RIDL_TESTC_H_INCLUDED__
#define __RIDL_TESTC_H_INCLUDED__

#include "ace/pre.h"

#include "tao/0x/stddef.h"
#include "tao/0x/corba.h"
#include "tao/0x/system_exception.h"
#include "tao/0x/orb.h"

using namespace corba_0x;

// generated from c++/cli_hdr/struct_pre.erb
class Global
{
public:

  // generated from c++/cli_hdr/struct_post.erb
  Global (void);
  ~Global (void) = default;
  Global (const Global&) = default;
  Global (Global&&) = default;
  explicit Global (int32_t x);
  Global& operator= (const Global& x);
  Global& operator= (Global&& x);

  void x (const int32_t& _x);
  void x (int32_t&& _x);
  const int32_t& x (void) const;
  int32_t& x (void);

  void swap (Global& s);

private:
  int32_t x_;
}; // Global

// generated from StubHeaderWriter#enter_module
namespace Test {

  // generated from c++/cli_hdr/enum.erb
  enum class DataType : uint32_t
  {
    dtEmpty,
    dtLong,
    dtShort,
    dtString,
    dtPoint,
    dtTrack,
    dtGlobal
  }; // DataType

  // generated from c++/cli_hdr/struct_pre.erb
  class Point
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Point (void);
    ~Point (void) = default;
    Point (const Point&) = default;
    Point (Point&&) = default;
    explicit Point (int32_t x,
                    int32_t y);
    Point& operator= (const Point& x);
    Point& operator= (Point&& x);

    void x (const int32_t& _x);
    void x (int32_t&& _x);
    const int32_t& x (void) const;
    int32_t& x (void);

    void y (const int32_t& _y);
    void y (int32_t&& _y);
    const int32_t& y (void) const;
    int32_t& y (void);

    void swap (Point& s);

  private:
    int32_t x_;
    int32_t y_;
  }; // Point

  // generated from c++/cli_hdr/struct_pre.erb
  class Track
  {
  public:

    // generated from c++/cli_hdr/struct_post.erb
    Track (void);
    ~Track (void) = default;
    Track (const Track&) = default;
    Track (Track&&) = default;
    explicit Track (int32_t id,
                    Test::Point p);
    Track& operator= (const Track& x);
    Track& operator= (Track&& x);

    void id (const int32_t& _id);
    void id (int32_t&& _id);
    const int32_t& id (void) const;
    int32_t& id (void);

    void p (const Test::Point& _p);
    void p (Test::Point&& _p);
    const Test::Point& p (void) const;
    Test::Point& p (void);

    void swap (Track& s);

  private:
    int32_t id_;
    Test::Point p_;
  }; // Track

  // generated from c++/cli_hdr/union_pre.erb
  class Data
  {
  public:

    // generated from c++/cli_hdr/union_post.erb
    Data (void);
    Data (const Data&);
    ~Data (void);
    Data &operator= (const Data&);

    void _d (const DataType&);
    const DataType& _d (void) const;

    void longData (const int32_t& _longData);
    void longData (int32_t&& _longData);
    const int32_t& longData (void) const;
    int32_t& longData (void);

    void shortData (const int16_t& _shortData);
    void shortData (int16_t&& _shortData);
    const int16_t& shortData (void) const;
    int16_t& shortData (void);

    void stringData (const std::string& _stringData);
    void stringData (std::string&& _stringData);
    const std::string& stringData (void) const;
    std::string& stringData (void);

    void pointData (const Test::Point& _pointData);
    void pointData (Test::Point&& _pointData);
    const Test::Point& pointData (void) const;
    Test::Point& pointData (void);

    void trackData (const Test::Track& _trackData);
    void trackData (Test::Track&& _trackData);
    const Test::Track& trackData (void) const;
    Test::Track& trackData (void);

    void globalData (const Global& _globalData);
    void globalData (Global&& _globalData);
    const Global& globalData (void) const;
    Global& globalData (void);

    void _default (void);

    void swap (Data& s);

  private:
    void _swap_u (Data& s);
    void _clear (void);

    DataType disc_;
    union u_type_
    {
      u_type_ (void);
      ~u_type_ (void);
      int32_t longData_;
      int16_t shortData_;
      std::string stringData_;
      Test::Point pointData_;
      Test::Track trackData_;
      Global globalData_;
    } u_;
  }; // Data

  // generated from StubHeaderWriter#enter_interface

  // generated from c++/cli_hdr/interface_fwd.erb
#if !defined (_INTF_TEST_FOO_FWD_)
#define _INTF_TEST_FOO_FWD_
  class Foo_stub;
  class Foo_skel;
  template <typename T> class Foo_ref;
  template <typename T> class Foo_srvref;
  typedef Foo_ref <Foo_stub> Foo;
  class Foo_proxy;
  typedef Foo_proxy* Foo_proxy_ptr;

  struct Foo_traits
  {
    typedef Foo_stub stub_type;
    typedef Foo ref_type;
    typedef ref_type* ptr_type;
    typedef const ref_type* const_ptr_type;
    typedef corba_0x::ObjVar_T<Foo_traits>  var_type;

    static ptr_type create (const_ptr_type copy_from = nullptr);
    static void destroy (ptr_type p);
    static void swap (ref_type& r1, ref_type& r2);
    static void move (ref_type& r1, ref_type& r2);
    static const corba_0x::Object_proxy& to_proxy (const ref_type& p);
  };
#endif // !_INTF_TEST_FOO_FWD_

  // generated from c++/cli_hdr/interface_pre.erb
  class Foo_stub
    : public virtual corba_0x::CORBA::Object_stub
  {
  public:
    friend class Foo_ref <Foo_stub>;

    virtual const std::string& _interface_repository_id () const;

    // generated from c++/cli_hdr/operation.erb
    bool pass_union (const Test::Data& s);

    // generated from c++/cli_hdr/operation.erb
    Test::Data return_union (void);

    // generated from c++/cli_hdr/operation.erb
    bool get_union (Test::Data& s);

    // generated from c++/cli_hdr/operation.erb
    bool update_union (Test::Data& s);

    // generated from c++/cli_hdr/operation.erb
    void shutdown (void);

    // generated from c++/cli_hdr/interface_post.erb
    explicit Foo_stub (Foo_proxy_ptr p);
  protected:
    Foo_stub (void);
    static Foo_stub* narrow (corba_0x::CORBA::Object_stub* obj);

  private:
    Foo_stub(const Foo_stub&) = delete;
    Foo_stub& operator=(const Foo_stub&) = delete;
    Foo_proxy_ptr foo_proxy_;
  }; // Foo_stub


  // generated from c++/cli_hdr/interface_objref.erb
  template <typename T>
  class Foo_ref : public corba_0x::CORBA::ObjRef_T<T>
  {
  public:
    explicit Foo_ref (T *s = nullptr);
    Foo_ref (std::shared_ptr <T> &t);
    
    template<typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::ref_type*, T*>::value>::type>
    Foo_ref (_Tp1 obj) : corba_0x::CORBA::ObjRef_T<T> () { this->stub_ = obj.get_shared (); };
    template<bool VAR = true, typename _Tp1, typename = typename
      std::enable_if<std::is_convertible<typename _Tp1::traits::stub_type*, T*>::value>::type>
    Foo_ref (_Tp1 obj) : corba_0x::CORBA::ObjRef_T<T> () { this->stub_ = obj->get_shared (); };
    void operator=(std::nullptr_t t);
    operator corba_0x::CORBA::Object_ref <corba_0x::CORBA::Object_stub> ();
    static Foo_ref<T> narrow(corba_0x::CORBA::Object obj);

    typedef Foo_srvref<Foo_skel> servant_type;
    typedef Foo_skel servant_base_type;
  };
}; // namespace Test


// generated from StubHeaderStdWriter#pre_visit
namespace std {

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (Global& m1, Global& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (Test::Point& m1, Test::Point& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/struct_std.erb
  template <>
  inline void swap (Test::Track& m1, Test::Track& m2)
  {
    m1.swap (m2);
  }

  // generated from c++/cli_hdr/union_std.erb
  template <>
  inline void swap (Test::Data& m1, Test::Data& m2)
  {
    m1.swap (m2);
  }
}; // std

#include "TestC.inl"

#if defined (__TAO_0X_INCLUDE_STUB_PROXY__)
#include "TestP.h"
#endif

#include "ace/post.h"

#endif // __RIDL_TESTC_H_INCLUDED__

// -*- END -*-

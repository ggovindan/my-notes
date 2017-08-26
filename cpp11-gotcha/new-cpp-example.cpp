//CPP 14 constructor

#include <iostream>
#include <string>

using namespace std;
class T {
  int x;
  string name;
public: 
  T () {
    cout << "calling default constructor\n";
  }
  ~T() {
    cout << "calling destructor\n";
  }

  //move constructor
  T (T&& temp):x(0), name("test") {
    cout<< "calling move constructor\n";
    x = temp.x;
    name = temp.name;

    temp.x = 0;
    temp.name = "test";
  }

  T& operator= (T&& rhs) {
    cout << "doing move operation\n";
    if (this == &rhs)
      return *this;

    //release current resources
    x = 0;
    name = "test";
    
    //copy operation
    x = rhs.x;
    name = rhs.name;

    //initialize members of rhs
    rhs.x = 0;
    rhs.name = "test";

    return *this;
  }

  //A copy constructor
  T (const T& rhs): x(0), name("temp") {
    cout << "inside copy constructor\n";
    x = rhs.x;
    name = rhs.name;
  }
};

T MyFunc(T t) {
  cout<<"inside MyFunc\n";
  return t;
}

int main(void) {
  cout<<"Inside Main\n";

  //creating the function argument for MyFunc as a rvalue so that move constructor is invoked
  T t1 = MyFunc(T());

  cout << "creating local object\n";
  //creating a local object so that MyFunc get lvalue implicitly invoking copy constructor when calling MyFunc()
  T t2 = T();
  MyFunc(t2);
  return 0;
}
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
};

T MyFunc(T t) {
  cout<<"inside MyFunc\n";
  return t;
}

int main(void) {
  cout<<"Inside Main\n";
  T t = MyFunc(T());
  return 0;
}
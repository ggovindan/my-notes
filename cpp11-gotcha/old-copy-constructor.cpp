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

  T (const T& temp) {
    cout<< "calling copy constructor\n";
  }
  T& operator= (const T& rhs) {
    cout << "doing copy operation\n";
    this->x = rhs.x;
    this->name = rhs.name;
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
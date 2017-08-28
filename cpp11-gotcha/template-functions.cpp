#include<iostream>

using namespace std;

template<typename T>
T add(T& a, T& b) {
  return a + b;
}

//templates with param types as universal references (T&&)
//Not sure how to return values from here yet
template<typename T>
T&& concat(T&& a, T&& b) {
}

//template taking values as pass by values
template<typename T>
T dipoza(T a, T b) {
  return a + b;
}


//template that takes a reference and is passed an array in main()
//This will be a reference to an array and it can know the size of it at compile time as follows
//Here if we call f(x), where x is a `const char x[]="dipoza"` then T will be of type const char [7] (extra for \0) 
// and paramType will be of type const char (&)[7]
template<typename T>
void f(T& param) {

}

// From the above example we can also have a template function like below to kknow the size 
// of the array during compile time
// -- constexpr is a keyword that will make its results available during compile time
//        hence making us declare something like this int MyArray[arraySize(someArray)];
// -- noexcept is a keyword that helps compilers generate better code.
// template<typename t, std::size_t N>
// constexpr std::size_t arraySize(T (&dip)[N]) noexcept {
//   return N;
// }

constexpr std::size_t arrSize(int (&dip)[7]) noexcept {
  return 10;
}

int main(void) {
  int a = 10, b = 13;

  //Here typeof T has deduced as int and paramtype for add function is deduced as int&
  cout<< "calling template as lvalue references="<<add(a, b)<<endl;

  const int ca = a; // ca is a const containing value of a
  const int& cb = b; //cb is a constant reference pointing to b

  //Here type of T is still only deduced as int but the paramType for add function is deduced as const int&
  cout<<"calling template as references="<<add(a, b)<<endl;


  //Here dipoza method is taking values as pass by value hence even if you pass ca, cb, T will be int and ParamType will be int and not references
  cout << "calling template by value="<<dipoza(ca, cb)<<endl;

  int keyVal = [1, 2, 3, 4, 5, 6, 6];
  std::array<int, arrSize(keyVal)> myTempArray;

  cout<<"size of myTempArray="<<myTempArray.size();
}
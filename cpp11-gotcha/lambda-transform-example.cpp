#include<iostream>

using namespace std;

string& toUpper(string& s) {
  std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) -> unsigned char {
    if (c > 96) {
      return (c - 32); //can also use std::toupper(c) but just want to test my old c ascii tricks
    }
    return c;
  });
  return s;
}

int main(void) {
  string name = "gurunathan";
  cout<<"my name is upper="<<toUpper(name)<<endl;
}
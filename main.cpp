#include <iostream>
#include "tests/valueAndRef.hpp"

using namespace std;

int main() {
  int x = 10; //Pick some numbers
  int y = 17; //It does not matter

  //Adding by reference
  cout << "Before we increment by reference: x = " << x << endl;
  addByRef(x);
  cout << "After we increment by reference: x = " << x << endl; //This should be 11

  //Adding by value
  cout << "Before we increment by value: y = " << y << endl;
  int newNum = addByValue(y);
  cout << "After we increment by value: y = " << y << ", newNum = " << newNum << endl; //This should print: "y = 17, newNum = 18"
}

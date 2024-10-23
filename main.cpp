#include "DSA/patterns/patterns.h"
#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";
  squarePattern(16);
  rightAnglePattern(5, "*");
  rightAnglePattern(5, "number");
  reverseRightAgnleTriangle(5, "*");
  reverseRightAgnleTriangle(5, "number");

  return 0;
}
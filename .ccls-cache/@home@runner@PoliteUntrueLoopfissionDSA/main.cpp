#include "DSA/patterns/patterns.h"
#include <iostream>
using namespace std;
int main() {
  cout << "Hello World!\n";
  squarePattern(5);
  rightAnglePattern(5, "*");
  rightAnglePattern(5, "number");
  reverseRightAgnleTriangle(5, "*");
  reverseRightAgnleTriangle(5, "number");
  straigthPyramid(5, "*");
  reversePyramid(5, "*");
  rhombus(5, "*");
  arrowHead(5, "*");
  toggledRightAngleTriangle(5);
  NumberCrownPattern(5);
  IncreasingNumberRightAngleTriangle(5);
  alphabetRightAngledTriangle(5);
  reverseAlphabetsRightAngledTriangle(5);
  alphaRampPattern(5);
  alphaHillPattern(5);
  alphaTrianglePattern(5);
  SymmetricVoidPattern(16);
  return 0;
}
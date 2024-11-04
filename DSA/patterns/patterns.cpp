#include <bits/stdc++.h>
using namespace std;

void squarePattern(int a) {
  for (int i = 0; i < a; i++) {
    for (int i = 0; i < a; i++) {
      cout << "* ";
    }
    cout << endl;
  }
}

void rightAnglePattern(int a, string str) {
  if (str == "*") {
    for (int i = 0; i < a; i++) {
      for (int j = 0; j <= i; j++) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  if (str == "number") {
    for (int i = 0; i < a; i++) {
      for (int j = 1; j <= i + 1; j++) {
        cout << j << " ";
      }
      cout << endl;
    }
  }
}

void reverseRightAgnleTriangle(int a, string str) {
  if (str == "*") {
    for (int i = 0; i < a; i++) {
      for (int j = a; j > i; j--) {
        cout << "* ";
      }
      cout << endl;
    }
  }
  if (str == "number") {
    for (int i = 0; i < a; i++) {
      int idx = 1;
      for (int j = a; j > i; j--) {
        cout << idx++ << " ";
      }
      cout << endl;
    }
  }
}

void straigthPyramid(int a, string str) {
  if (str == "*") {
    int k = 1;
    for (int i = 0; i < a; i++) {
      for (int j = a; j > i; j--) {
        cout << " ";
      }
      for (int l = 0; l < k; l++) {
        cout << "*";
      }
      k += 2;
      cout << endl;
    }
  }
}

void reversePyramid(int a, string str) {
  if (str == "*") {
    int k = (2 * a) - 1;
    for (int i = 0; i < a; i++) {
      for (int j = 0; j <= i; j++) {
        cout << " ";
      }
      for (int l = k; l > 0; l--) {
        cout << "*";
      }
      k -= 2;
      cout << endl;
    }
  }
}

void rhombus(int a, string str) {
  if (str == "*") {
    straigthPyramid(5, "*");
    reversePyramid(5, "*");
  }
}

void arrowHead(int a, string str) {
  if (str == "*" && a > 1) {
    rightAnglePattern(a, "*");
    reverseRightAgnleTriangle(a - 1, "*");
  }
}

void toggledRightAngleTriangle(int a) {
  int row = 1;
  for (int i = 0; i < a; i++) {
    int column = row;
    for (int j = 0; j <= i; j++) {
      cout << column;
      column = !column;
    }
    cout << endl;
    row = !row;
  }
}

void NumberCrownPattern(int a) {
  int l = a - 1;
  for (int i = 1; i < a; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    for (int j = a - i; j > 1; j--) {
      cout << "  ";
    }
    for (int j = a - l; j > 0; j--) {
      cout << j;
    }
    l -= 1;
    cout << endl;
  }
}

void IncreasingNumberRightAngleTriangle(int a) {
  int globalIncrementer = 1;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j <= i; j++) {
      cout << globalIncrementer++ << " ";
    }
    cout << endl;
  }
}

void alphabetRightAngledTriangle(int a ){
  for(int i= 0;i<a;i++){
    int start = 65;
    for(int j = 0;j<=i;j++){
      cout<<char(start++)<<" ";
    }
    cout<<endl;
  }
}

void reverseAlphabetsRightAngledTriangle(int a){
  for(int  i = 0;i<a;i++){
    int start = 65;
    for(int j = a-i;j>0;j--){
      cout<<char(start++)<<" ";
    }
    cout<<endl;
  }
}

void alphaRampPattern(int a){
  int start = 65;
  for(int i=0;i<a;i++){
    for(int j=0;j<=i;j++){
      cout<<char(start)<<" ";
    }
    start++;
    cout<<endl;
  }
}

//incomplete 
void alphaHillPattern(int a){
  for(int i =0;i<a;i++){
    for(int j=a;j>0;j--){
      cout<<" ";
    }
    int start = 65;
    
    for(int j=0;j<=i;j++){
      cout<<char(start++);
    }

    cout<<endl;
  }
}
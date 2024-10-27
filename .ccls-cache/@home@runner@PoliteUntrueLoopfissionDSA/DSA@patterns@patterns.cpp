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

void reversePyramid(int a, string str){
  if(str == "*"){
    int k = (2*a)-1;
    for(int i =0;i<a;i++){
      for(int j = 0;j<=i;j++){
        cout<<" ";
      }
      for(int l = k; l>0; l--){
        cout<<"*";
      }
      k-=2;
      cout<<endl;
    } 
  }
}

void rhombus(int a, string str){
  if(str=="*"){
    straigthPyramid(5,"*");
    reversePyramid(5, "*");
  }
}

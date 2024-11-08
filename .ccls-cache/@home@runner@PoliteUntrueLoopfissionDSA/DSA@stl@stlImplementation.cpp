#include <bits/stdc++.h>
using namespace std;

// unorderedSet implementation
void unorderdSetImp() { 
  unordered_set<int> us;
  //insert operation
  for(int i = 0;i < 10;i++){
    us.insert(i);
  }

  //print them
  for(auto it = us.begin();it!=us.end();it++){
    cout<< *it<<endl;
  }
}
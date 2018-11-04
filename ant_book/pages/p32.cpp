
#include <cstdio>
#include <iostream>

#include <stack>

using namespace std;


int main(){
  // last in first out.
  stack<int> s;

  s.push(1);
  s.push(2);
  s.push(3);

  s.pop();
  cout<< s.top() << endl;

}
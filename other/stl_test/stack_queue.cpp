#include <bits/stdc++.h>
using namespace std;

int main(){

  stack<int> s;
  s.push(1);
  s.push(2);

  cout << s.top() << endl;
  cout << s.top() << endl;

  queue<int> q;
  q.push(3);
  q.push(4);

  cout << q.back() << endl;
  return 0;
}
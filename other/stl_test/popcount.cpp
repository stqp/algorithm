#include <bits/stdc++.h>
using namespace std;

int main(){

  int x0 = 0;
  int x2 = 2;
  int x4 = 4;
  int x16 = 16;
  int x20 = x4 + x16;

  cout << __builtin_popcount(x20) << endl;
  return 0;
}
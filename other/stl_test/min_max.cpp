#include <bits/stdc++.h>
using namespace std;

int main(){

  int arr[5];

  arr[0] = 3;
  arr[1] = 2;
  arr[2] = 1;
  arr[3] = 4;
  arr[4] = 5;

  int minn = 2^64-1;
  for(int i=0; i<5; i++) minn = min(arr[i], minn);
  cout << minn << endl;

  return 0;
}
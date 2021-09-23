#include <bits/stdc++.h>
using namespace std;

int main(){

  static int N = 6;
  int arr[N];
  
  arr[0] = 4;
  arr[1] = 5;
  arr[2] = 1;
  arr[3] = 2;
  arr[4] = 3;
  arr[5] = 6;
  arr[6] = 7;
  sort(arr, arr + N);

  cout << lower_bound(arr, arr + N, 3) - arr << endl;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int arr[6];

  arr[0] = 4;
  arr[1] = 5;
  arr[2] = 3;
  arr[3] = 2;
  arr[4] = 3;
  arr[5] = 3;
  arr[6] = 7;

  cout << count(arr, arr + 6, 3) << endl;;

}
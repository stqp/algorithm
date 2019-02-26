#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


int main(){
  int n; cin>>n;
  int sum = 0;
  int a[100+10];
  rep(i,n){
    cin >> a[i];
    sum += a[i]; 
  } 

  int mini = 101 * n;
  int ans = -1;
  rep(i,n){
    if( abs(sum - n*a[i]) < mini){
      ans = i;
      mini = abs(sum - n*a[i]);
    }
  }

  cout << (ans) << endl;
}

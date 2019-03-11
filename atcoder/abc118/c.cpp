#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


int gcd(int a,int b){
  if( a < b ) return gcd(b,a);
  else {
    if(b == 1) return 1;
    else if(b == 0) return a;
    else return gcd(b, a%b);
  }
}

int main(){
  int n;
  int a[1000000];

  cin>>n;rep(i,n)cin>>a[i];

  int ans = a[0];
  rep(i,n-1){
    ans = gcd(ans,a[i+1]);
  }

  cout << ans << endl;
  return 0;
}
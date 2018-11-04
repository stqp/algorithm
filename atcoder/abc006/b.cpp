#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int static const max_n = 1000005;
int dp[max_n];

int fib(int x){
  if(x<=2) return 0;
  if(x==3) return 1;
  if(dp[x] != -1) return dp[x];
  return dp[x] = (fib(x-1)+fib(x-2)+fib(x-3))%10007;
}

int main(){
  memset(dp,-1,max_n*sizeof(int));
  int n;cin>>n;
  cout << fib(n) << endl;
}
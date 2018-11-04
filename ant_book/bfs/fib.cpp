#include <iostream>
#include <string>
using namespace std;

int dp[10000];

int fib(int x){
  if(x <= 1) return x;
  if(dp[x] != -1) return dp[x];
  return dp[x] = fib(x-1) + fib(x-2);
}

int main(){
  memset(dp,-1,10000*sizeof(int));
  int n;
  cin >> n;
  cout << fib(n) << endl;
}
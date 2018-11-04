
#include <iostream>
#include <cstdio>

using namespace std;

static const int MAX_N = 110;
int memo[MAX_N];

int fib(int n){
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib(n-1) + fib(n-2);
}

int main(){
  for(int i=0;i<MAX_N - 1;i++){
    memo[i] = 0;
  }

  int res = fib(47);
  cout << res << endl;
}

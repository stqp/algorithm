#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int static const N_MAX = 1000 * 1000;
int N;
int dp[N_MAX];
int h[N_MAX];

int main(){

  int INF = 1000 * 1000 * 1000;
  cin>>N;
  rep(i,N){
    cin>>h[i];
    dp[i] = INF;
  }
  dp[N + 1] = INF;
  dp[N + 2] = INF;
  dp[N + 3] = INF;
  dp[N + 4] = INF;
  dp[N + 5] = INF;

  dp[0] = 0;
  rep(i,N){
    dp[i+1] = min(dp[i] + abs(h[i+1]-h[i]), dp[i+1]);
    dp[i+2] = min(dp[i] + abs(h[i+2]-h[i]), dp[i+2]);
  }

  cout<< dp[N-1] << endl;

}
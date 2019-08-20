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
#include <queue>
#include <stack>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int static const N_MAX = 100 + 100;
int static const V_MAX = 1000 * 100 + 100;

int INF = 10000000;
int N,W;
int w[N_MAX];
int v[N_MAX];
int dp[N_MAX][V_MAX];


long long dfs(int i, long long j){

  if( dp[i][j] >= 0 ) return dp[i][j];

  long long ans = 0;
  if( i == N ) ans = 0;
  else if( j < w[i] ) ans = dfs(i+1,j);
  else ans = max(dfs(i+1, j-w[i])+v[i], dfs(i+1,j));
  
  return dp[i][j] = ans;

}

int main(){
  cin>>N>>W;
  rep(i,N) cin>>w[i]>>v[i];

  rep(i,N_MAX)
    rep(j,V_MAX)
      dp[i][j] = INF;

  dp[0][0] = 0;
  cout<< dfs(0,V) <<endl;

}
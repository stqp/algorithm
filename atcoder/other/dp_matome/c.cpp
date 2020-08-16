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

typedef pair<int,int> P;
queue<P> q;

int static const N_MAX = 1000 * 1000;
int N;
int y[N_MAX][3];
int dp[N_MAX][3];


void bfs(){

  for(int i=0; i<N; i++){
    rep(now, 3){
      rep(next, 3){
        if(now == next) continue;
        dp[i+1][next] = max(dp[i+1][next], dp[i][now] + y[i+1][next]);
      }
    }
  }

}


int main(){

  cin>>N;
  rep(i,N){
    cin>>y[i][0]>>y[i][1]>>y[i][2];
    dp[i][0] = 0;
    dp[i][1] = 0;
    dp[i][2] = 0;
  }

  dp[0][0] = y[0][0];
  dp[0][1] = y[0][1];
  dp[0][2] = y[0][2];
  bfs();

  int ans = max(max(dp[N-1][0], dp[N-1][1]), dp[N-1][2]);
  cout<< ans <<endl;

}
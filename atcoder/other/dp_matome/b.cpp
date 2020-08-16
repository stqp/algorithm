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
int static const K_MAX = 100;
int static const H_MAX = 1000 * 1000;
int N,K;
int h[H_MAX];
int dp[N_MAX];

int main(){

  int INF = 1000 * 1000 * 1000;
  cin>>N>>K;
  rep(i,N){
    cin>>h[i];
    dp[i] = INF;
  }
  rep(i,K * 5){
    dp[N + i] = INF;
  }

  dp[0] = 0;
  rep(i,N){
    for(int j=1;j<=K;j++){
      dp[i+j] = min(dp[i] + abs(h[i+j]-h[i]), dp[i+j]);
    }
  }
  cout<< dp[N-1] << endl;

}
// clang-format off
#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <regex>
#include <tuple>
#include <cassert>
#include <bitset>
using namespace std;
#define ll long long
#define lb long double
#define us unsigned short
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define repe(i, l, r) for (ll i = l; i <= (ll)(r); i++)
ll INF = (1LL<<62);
ll MOD = 1000*100;

const static ll MAX_DP = 1000;
ll x[MAX_DP];
ll y[MAX_DP];
lb nr[MAX_DP];
lb dp[MAX_DP];

int main() {
  ll N,M; 
  cin>>N>>M;
  rep(i,0,N) cin >> x[i] >> y[i] >> nr[i];
  rep(i,N,N+M) cin >> x[i] >> y[i];
  rep(i,0,MAX_DP) dp[i] = INF;

  // N個の点とＮ個の点。（半径固定）
  rep(i,0,N) dp[i] = nr[i];

  // N個の点とM個の点
  rep(n,0,N) {
    rep(m,N,N+M) {
      dp[m] = min(dp[m], sqrt(pow(x[n]-x[m],2) + pow(y[n]-y[m],2))-nr[n]);
    }
  }

  // M個の点とM個の点
  rep(m1,N,M) {
    rep(m2,m1+1,M) {
      lb half = sqrt(pow(x[m1]-x[m2],2) + pow(y[m1]-y[m2],2)) / 2;
      dp[m1] = min(dp[m1], half);
      dp[m2] = min(dp[m2], half);
    }
  }

  lb ans = INF;
  rep(i,0,N+M) ans = min(ans, dp[i]); 
  printf("%.20Lf\n", ans);
}
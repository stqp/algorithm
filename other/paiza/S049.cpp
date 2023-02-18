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
#include <tuple>
#include <cassert>
#include <bitset>
using namespace std;
#define ll long long
#define lb long double
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define repe(i, l, r) for (ll i = l; i <= (ll)(r); i++)
ll INF = (1LL << 62);

ll dp[5000][5000];
ll N, X, F, S;

int dfs(ll n, ll x) {
  if (dp[n][x] != INF) return dp[n][x];
  if (x >= n) return 1;

  ll a, b;
  if (max(0LL, x - F) != x) a = dfs(n - x, max(0LL, x - F)) + 1;
  else a = INF;

  if (min(S, x + S) != x) b = dfs(n, min(S, x + S)) + 3;
  else b = INF;

  dp[n][x] = min(a, b);
  return dp[n][x];
}

int main() {
  cin >> N >> X >> F >> S;
  repe(i, 0, N) repe(j, 0, X) dp[i][j] = INF;
  dfs(N, X);
  cout << dp[N][X] << endl;
}
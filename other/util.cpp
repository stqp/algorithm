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
ll INF = (1LL<<62);
ll MOD = 1000000007;

const static ll N = 1000 * 1000 * 5;
ll dp[N];

// 階乗 % MOD
void mod_factorial(ll x, ll mod){ 
    dp[0] = 1;
    dp[1] = 1;
    rep(i,1,x) {
        dp[i+1] = ((i+1) * dp[i]) % mod;
    }
}

// m ^ n % MOD
ll mod_pow(ll m, ll n, ll mod){
    if (n == 0) return 1;
    if (n % 2 == 1) return (m * mod_pow(m, n-1, mod)) % mod;
    if (n % 2 == 0) {
        ll d = mod_pow(m, n/2, mod);
        return (d * d) % mod;
    }
    return -1;
}

struct UnionFind {
  vector<int> par;
  vector<int> sizes;

  UnionFind(int n) : par(n), sizes(n, 1) {
    rep(i,0,n) par[i] = i;
  }

  int find(int x) {
    if (x == par[x]) return x;
    return par[x] = find(par[x]);
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);

    if (x == y) return;

    if (sizes[x] < sizes[y]) swap(x, y);

    par[y] = x;
    sizes[x] += sizes[y];
  }

  bool same(int x, int y) {
    return find(x) == find(y);
  }

  int size(int x) {
    return sizes[find(x)];
  }
};
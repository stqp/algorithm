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

const static ll MAX_DP = 10*1000*1000;
ll dp[MAX_DP];

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

int main() {
  ll N; cin>>N;
  ll Q; cin>>Q;

  UnionFind uf(N);

  ll C, X, Y;
  rep(i,0,Q){
    cin >> C >> X >> Y;
    if (C == 0) uf.unite(X,Y);
    if (C == 1) cout << (uf.same(X,Y) ? 1 : 0) << endl;
  }

}
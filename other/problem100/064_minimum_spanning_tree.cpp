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

struct UnionFind
{
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

struct Edge {
    ll from, to, cost;

    bool operator<(const Edge& o) const {
        return cost < o.cost;
    }
};

ll V,E;
vector<Edge> ES;

int main() {
    cin>>V>>E;
    rep(i,0,E) {
        Edge e;
        cin>> e.from >> e.to >> e.cost;
        ES.push_back(e);
    }

    sort(ES.begin(), ES.end());

    UnionFind uf(V);
    ll ans = 0;
    rep(i, 0, ES.size()) {
        Edge& e = ES[i];
        if (!uf.same(e.from, e.to)) {
            ans += e.cost;
            uf.unite(e.from, e.to);
        }
    }

    cout << ans << endl;
}
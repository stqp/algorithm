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

ll X, Y;
char c[600][600];

ll ans = 0;
ll dfs(ll sx, ll sy, ll w, ll h) {

  return max(dfs(sx, sy, w + 1, h), dfs(sx, sy, w, h + 1));
}

int main() {
  cin >> Y >> X;
  rep(y, 0, Y) rep(x, 0, X) {
    cin >> c[y][x];
  }

  ll ans = 0;
  rep(sy, 0, Y) rep(sx, 0, X) {
    rep(gy, sy, Y) rep(gx, sx, X) {
      ll ok = true;

      repe(y, sy, gy) repe(x, sx, gx) {
        if (c[y][x] == '#') {
          ok = false;
          goto aaa;
        }
      }
    aaa:
      if (ok)  ans = max(ans, (gy - sy + 1) * (gx - sx + 1));
    }
  }
  cout << ans << endl;
}
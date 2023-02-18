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

ll N, K;
ll D[1000 * 1000]; // 最小値
// map<ll, vector<pair<ll, ll>>> ES;

ll M[1000][1000];

int main() {
  cin >> N >> K;
  rep(i, 0, 1000) rep(j, 0, 1000) M[i][j] = INF;

  rep(i, 0, K) {
    ll x; cin >> x;
    if (x == 1) {
      ll c, d, e; cin >> c >> d >> e;
      c--;
      d--;
      M[c][d] = min(M[c][d], e);
      M[d][c] = min(M[c][d], e);
    }
    else if (x == 0) {
      ll a, b; cin >> a >> b;
      a--;
      b--;
      rep(i, 0, N) D[i] = INF;
      queue<ll> qs;
      qs.push(a);
      D[a] = 0;
      while (!qs.empty()) {
        ll q = qs.front(); qs.pop();
        rep(i, 0, N) {
          if (M[q][i] == INF) continue;
          if (D[i] > D[q] + M[q][i]) {
            D[i] = D[q] + M[q][i];
            qs.push(i);
          }
        }
      }
      if (D[b] == INF) cout << "-1" << endl;
      else cout << D[b] << endl;
    }
  }

}
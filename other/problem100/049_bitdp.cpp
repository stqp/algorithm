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

ll V,E;
ll m[100][100];
ll dp[(1LL<<16)][100];


// g: goal vertex.
ll dfs(ll s, ll v, ll g) {
    if (dp[s][v] != INF) return dp[s][v];

    // start vertex まで戻った
    if (s == 0) 
        if (v == g) return dp[s][v] = 0; // start, goal が同じ →OK
        else return INF; // start, goal が異なる →1周できていない →NG

    if (!(s & (1<<v))) return INF; // 既に通過済vertexなのでスキップ

    ll prev = s^(1<<v); // 今いる vertex を通過済記録のためフラグを 0 に。
    ll ans = INF;
    rep(i,0,V) { // 遷移可能なvertexを全探索して最短を探す。
        if (m[i][v] != INF) {
            ans = min(ans, dfs(prev, i, g) + m[i][v]);
        }
    }
    return dp[s][v] = ans;
}

int main() {
    cin>>V>>E;
    rep(i,0,100) rep(j,0,100) m[i][j] = INF;
    rep(i,0,E) {
        ll a,b,c; cin>>a>>b>>c;
        m[a][b] = c;
    }
    rep(i,0,1LL<<16) rep(j,0,100) dp[i][j] = INF;

    // 1周の最短距離はどのノードから開始しても同じ　→ "0"番vertexから開始。
    ll ans = dfs((1LL<<V)-1, 0, 0);
    if (ans < INF) cout << ans << endl;
    else cout << "-1" << endl;
}
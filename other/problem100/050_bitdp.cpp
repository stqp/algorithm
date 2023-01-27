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
ll t[100][100];
ll dp[(1LL<<16)][100]; // 最短経路
ll c[(1LL<<16)][100]; // 最短経路の個数

ll dfs(ll s, ll v, ll g) {
    if (dp[s][v] != INF) return dp[s][v];

    if (s == 0) // startまで戻った
        if (v == g) { // start == goal →OK
            c[s][v] = 1;
            return dp[s][v] = 0;
        } else return INF; // 1巡してない →NG

    if (!(s & (1<<v))) return INF; 

    ll prev = s^(1<<v);
    ll ans = INF;
    ll count = 0;

    rep(i,0,V) {
        if (m[i][v] == INF) continue;

        ll a = dfs(prev, i, g) + m[i][v];
        if (a > t[i][v]) continue; // 道路閉鎖条件

        if (ans == a) count += c[prev][i]; // 同じ最短経路なら合計する
        else if (ans > a) { // より最短な経路があれば合計リセット
            ans = min(ans, a);
            count = c[prev][i];
        }
    }
    c[s][v] = count;
    return dp[s][v] = ans;
}

int main() {
    cin>>V>>E;
    rep(i,0,100) rep(j,0,100) m[i][j] = INF;
    rep(i,0,E) {
        ll a,b,c,d; cin>>a>>b>>c>>d;
        a--;
        b--;
        m[a][b] = c;
        m[b][a] = c;
        t[a][b] = d; // 往路だけでなく復路も遷移可
        t[b][a] = d;
    }
    rep(i,0,1LL<<16) rep(j,0,100) dp[i][j] = INF;

    ll ans = dfs((1LL<<V)-1, 0, 0);
    if (ans < INF) {
        cout << ans << " " << c[(1LL<<V)-1][0] << endl;
    } else cout << "IMPOSSIBLE" << endl;
}
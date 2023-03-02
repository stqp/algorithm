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

const static ll _N = 100000 + 10;
const static ll _M = 100000 + 10;
vector<vector<ll>> ma (_N);

static bool done[_N];
static ll dp[_N]; // 最長ステップ。
ll N,M;

ll bfs(ll n) {
    if (done[n]) return dp[n];
    ll d = 0;
    for (ll i : ma[n]) {
        d = max(d, bfs(i) + 1);
    }
    done[n] = true;
    return dp[n] = max(dp[n], d);
}

int main() {
    cin>>N>>M;
    ll x,y;
    rep(i,0,M) {
        cin>>x>>y;
        ma[x].push_back(y);
    }

    ll ans = 0;
    repe(i,0,N) ans = max(ans, bfs(i));
    cout << ans << endl;
}
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

const static ll _N = 200;
const static ll V = 100000+10;

ll dp[_N][V]; // i番目で価値vとなる最小重さ 

int main() {
    ll N,W;
    cin>>N>>W;
    ll ws[_N];
    ll vs[_N];
    rep(i,0,N) cin >> ws[i] >> vs[i];


    rep(n,0,N) rep(v,0,V) dp[n][v] = INF;
    rep(n,0,N) dp[n][0] = 0;

    repe(n,0,N) {
        rep(v,0,V) {
            if (v-vs[n] >= 0) dp[n+1][v] = min(dp[n][v-vs[n]] + ws[n], dp[n][v]);
            else dp[n+1][v] = dp[n][v];
        }
    }
    ll ans = 0;
    rep(v,0,V) {
        if (dp[N][v] <= W) ans = max(ans, v);
    }
    cout << ans << endl;

}
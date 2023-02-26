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

const static ll MAX_DP = 1000 * 1000;
ll dp[MAX_DP][3]; // i-1日目 -> a 
ll work[MAX_DP][3];

int main() {
    ll N; cin>>N;
    rep(i,0,N) cin>>work[i][0]>>work[i][1]>>work[i][2];

    dp[0][0] = work[0][0];
    dp[0][1] = work[0][1];
    dp[0][2] = work[0][2];

    rep(i,0,N) rep(a,0,3) {
        rep(b,0,3) {
            if (a == b) continue;
            dp[i+1][b] = max(dp[i+1][b], dp[i][a] + work[i+1][b]);
        }
    }

    ll ans = 0;
    rep(i,0,3) ans = max(ans , dp[N-1][i]);
    cout << ans << endl;

}
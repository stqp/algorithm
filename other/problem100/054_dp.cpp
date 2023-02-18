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

ll N;
ll C[4 * 10000];
ll dp[4 * 10000];

int main() {
    cin >> N;
    rep(i, 0, N) cin >> C[i];
    rep(i, 0, N) dp[i] = INF;

    dp[0] = C[0];
    rep(i, 1, N) {
        ll l = lower_bound(dp, dp + (i + 1), C[i]) - dp;
        if (l == (i + 1)) dp[l - 1] = C[i];
        else dp[l] = C[i];
    }

    ll ans = 0;
    rep(i, 0, N) if (dp[i] != INF) ans = max(ans, i + 1);
    cout << (N - ans) << endl;
}
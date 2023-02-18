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
ll A[1000 * 1000];
ll dp[1000 * 1000];

int main() {
    cin >> N;
    rep(i, 0, N) cin >> A[i];
    rep(i, 0, N) dp[i] = INF;

    dp[0] = A[0];
    rep(i, 1, N) {
        ll l = lower_bound(dp, dp + (i + 1), A[i]) - dp;
        if (l == (i + 1)) dp[l - 1] = A[i];
        else dp[l] = A[i];
    }

    ll ans = 0;
    rep(i, 0, N) if (dp[i] != INF) ans = max(ans, (i + 1));
    cout << ans << endl;
}
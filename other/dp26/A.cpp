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
ll dp[MAX_DP]; // x にくるまでの最小値。

int main() {
    ll N; cin>>N;
    ll H[MAX_DP];
    rep(i,0,N) cin>>H[i];

    rep(i,0,N) dp[i] = INF;

    dp[0] = 0;
    dp[1] = abs(H[1] - H[0]);
    dp[2] = min(abs(H[2]-H[0]), abs(H[2]-H[1]));
    rep(i,0,N) {
        ll ont_step = abs(H[i+2] - H[i+1]) + dp[i+1];
        ll two_step = abs(H[i+2] - H[i]) + dp[i];
        dp[i+2] = min(ont_step, two_step);
    }

    cout << dp[N-1] << endl;

}
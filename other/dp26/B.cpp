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
    ll K; cin>>K;
    ll H[MAX_DP];
    rep(i,0,N) cin>>H[i];
    rep(i,0,N) dp[i] = INF;

    dp[0] = 0;
    repe(k,1,K) {
        rep(j,0,k) {
            dp[k] = min(dp[k], abs(H[k] - H[j]) + dp[j]);
        }
    }

    rep(n,K,N) {
        repe(k,1,K){
            dp[n] = min(dp[n], abs(H[n] - H[n-k]) + dp[n-k]);
        }
    }

    cout << dp[N-1] << endl;

}
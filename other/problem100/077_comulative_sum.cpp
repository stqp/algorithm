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
#define us unsigned short
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define repe(i, l, r) for (ll i = l; i <= (ll)(r); i++)
ll INF = (1LL<<62);
ll MOD = 1000*100;

const static ll MAX_DP = 5*100*1000;
static ll dp[MAX_DP];

int main() {
    ll N,M;
    ll A[MAX_DP];
    ll D[MAX_DP];

    cin>>N>>M;
    rep(i,0,N-1) cin>>D[i];
    rep(i,0,M) cin>>A[i];

    dp[0] = 0;
    ll sum = 0;
    rep(i,0,N-1) {
        sum += (D[i] % MOD);
        dp[i+1] = sum;
    }

    ll ans = 0;
    ll cur = 0;
    rep(i,0,M) {
        ll nxt = cur + A[i];
        ans = (ans + abs(dp[nxt] - dp[cur])) % MOD;
        cur = nxt;
    }
    cout << ans << endl;
}
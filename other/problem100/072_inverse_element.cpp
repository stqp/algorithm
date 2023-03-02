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
ll INF = (1LL<<63);
ll MOD = 1000000007;

const static ll N = 100 * 1000 * 5;
ll dp[N];

ll mod_factorial(ll x, ll mod){ 
    if (dp[x] != INF) return dp[x];
    if (x == 0) return 1;
    return dp[x] = (x * mod_factorial(x-1, mod)) % mod ;
}

ll mod_pow(ll m, ll n, ll mod){
    if (n == 0) return 1;
    if (n % 2 == 1) return (m * mod_pow(m, n-1, mod)) % mod;
    if (n % 2 == 0) {
        ll d = mod_pow(m, n/2, mod);
        return (d * d) % mod;
    }
    return -1;
}

int main() {
    rep(i,0,N) dp[i] = INF;
    ll W,H; cin>>W>>H;

    mod_factorial(W+H, MOD);

    ll a = dp[W+H-2];
    ll b = mod_pow(dp[W-1], MOD-2, MOD);
    ll c = mod_pow(dp[H-1], MOD-2, MOD);
    ll ans = (((a * b) % MOD) * c) % MOD;
    cout << ans << endl; 
}
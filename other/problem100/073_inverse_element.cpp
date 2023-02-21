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
ll MOD = 1000000007;

const static ll N = 1000 * 1000 * 5;
ll dp[N];

// 階乗 % MOD
void mod_factorial(ll x, ll mod){ 
    dp[0] = 1;
    dp[1] = 1;
    rep(i,1,x) {
        dp[i+1] = ((i+1) * dp[i]) % mod;
    }
}

// m ^ n % MOD
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
    ll X,Y; cin>>X>>Y;

    if ((2*Y-X)%3 != 0 || (2*X-Y)%3 != 0 || (2*Y-X) < 0 || (2*X-Y) < 0) {
        cout << "0" << endl;
        return 0;
    }
    ll a = (2*Y-X) / 3;
    ll b = (2*X-Y) / 3;

    mod_factorial(N-1, MOD);

    ll x = dp[a+b];
    ll y = mod_pow(dp[a], MOD-2, MOD);
    ll z = mod_pow(dp[b], MOD-2, MOD);
    ll ans = (((x * y) % MOD) * z) % MOD;
    cout << ans << endl; 
}
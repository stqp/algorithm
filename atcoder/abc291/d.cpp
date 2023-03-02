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
ll MOD = 998244353;

const ll _N = 2*100000 + 10;
ll dp[_N][2]; // i番目から2^i 通りのうち条件を満たす裏返し方。0は裏返さない。1は裏返した。

int main() {
    ll N; cin>>N;
    ll X[_N][2];
    repe(i,1,N) cin>>X[i][0]>>X[i][1];

    dp[1][0] = 1;
    dp[1][1] = 1;
    repe(n,2,N) {
        rep(pre,0,2) rep(nxt,0,2) {
            if (X[n][nxt] != X[n-1][pre]) {
                dp[n][nxt] += dp[n-1][pre] % MOD;
            }
        }
    }
    
    cout << (dp[N][0] + dp[N][1]) % MOD << endl;
}
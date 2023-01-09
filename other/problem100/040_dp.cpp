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
ll MOD = 10*1000;

int main()
{
    ll N,K; cin>>N>>K;
    ll B[200];
    repe(i,0,N) B[i] = -1;
    rep(i,0,K){
        ll a,b; cin>>a>>b;
        B[a-1] = b-1;
    }

    ll dp[200][10][10] = {0}; // i 日目までに i-1 日目 -> a , i-2 日目 -> b のパスタである組み合わせ数
    dp[0][0][0] = 1;

    rep(i,0,N) rep(a,0,3) rep(b,0,3) {
        ll ps = 3;
        ll p[] = {0,1,2}; // パスタ候補
        if (B[i] >= 0) {
            p[0] = B[i];
            ps = 1;
        }
 
        rep(j,0,ps) {
            ll c = p[j];
            if (i >= 2 && a==b && b==c) continue;
            dp[i+1][b][c] = (dp[i+1][b][c] + dp[i][a][b]) % MOD; 
        }
    }

    ll ans = 0;
    rep(a,0,3)rep(b,0,3) ans = (ans + dp[N][a][b]) % MOD;
    cout << ans << endl;
}
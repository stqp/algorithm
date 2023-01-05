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
// clang-format off

ll v[200];
ll w[20 * 1000];

// i 番目までの品物から w を超えないように選んだ時の価値の最大値
ll dp[200][20 * 1000];

ll dps(ll i, ll wi) {
    if (dp[i][wi] != INF) return dp[i][wi];
    if (w[i] > wi) dp[i][wi] = dps(i-1, wi);
    else dp[i][wi] = max(dps(i-1, wi-w[i]) + v[i], dps(i-1, wi));
    return dp[i][wi];
}

int main()
{
    ll N,W;
    cin>>N>>W;
    rep(i,0,N) {
        cin>> v[i+1];
        cin>> w[i+1];
    }
    rep(i,0,200) rep(j,0,20*1000) dp[i][j] = INF;
    repe(i,0,W) dp[0][i] = 0; 

    cout << dps(N, W) << endl;
}
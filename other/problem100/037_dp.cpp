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
#define repr(i, l, r) for (ll i = l; i > (ll)(r); i--)
#define repre(i, l, r) for (ll i = l; i >= (ll)(r); i--)
ll INF = (1LL<<62);
ll Null = (1LL<<60);
// ll INF = -1;
// clang-format off

ll c[100];

// n 円を i 番目までの硬貨で払う時の最小値
ll dp[100][50 * 1010];

ll dps(ll i, ll n){
    if (dp[i][n] != Null) return dp[i][n];

    if (n >= c[i]) {
        dp[i][n] = min(dps(i, n-c[i]) + 1, dps(i-1, n));
    }else {
        dp[i][n] = dps(i-1,n);
    }
    return dp[i][n];
}


int main()
{
    ll N,M;
    cin>>N>>M;
    repe(i,1,M) cin>>c[i];
    repe(m,0,M)repe(n,0,N) dp[m][n] = Null;

    dp[0][0] = 0;
    repe(i,1,N) dp[0][i] = INF;

    cout << dps(M, N) << endl;
}


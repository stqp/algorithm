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

ll c[110];
ll dp[110][40]; // i 番目までの数を + - して x を作れる組み合わせの最大数。

int main()
{
    ll N; cin>>N;
    rep(i,0,N) cin>>c[i];

    repe(i,0,N)repe(j,0,21) dp[i][j] = 0;
    dp[0][c[0]] = 1;

    rep(n,0,N) {
        repe(i,0,20) {
            if (i-c[n+1] >= 0) {
                dp[n+1][i] += dp[n][i-c[n+1]];
            }
            if (i+c[n+1] <= 20){
                dp[n+1][i] += dp[n][i+c[n+1]];
            }
        }
    }

    cout << dp[N-2][c[N-1]] << endl;
}

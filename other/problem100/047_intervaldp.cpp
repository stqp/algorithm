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

ll dp[3000*2+10][3000*2+10] = {0}; // JOI's maximum
ll N;
ll A[3000*2+10]; // circle

int main() {
    cin>>N;
    rep(i,0,N) {
        cin>>A[i];
        A[i+N] = A[i]; // for circle.
    }

    rep(n,1,N) { 
        repe(l,0,N*2-n) {
            ll r = l+n;
            ll la = l;
            ll ra = r-1; // arrange index gap.
            if ((N-n) % 2 == 0) dp[l][r] = max(dp[l+1][r] + A[la], dp[l][r-1] + A[ra]);
            else dp[l][r] = A[la] < A[ra] ? dp[l][r-1] : dp[l+1][r];
        }
    }

    // i'th cake (=A[i]) is eatten by JOI. and search which cake should JOI eat at first.
    ll ans = 0;
    rep(i,0,N) ans = max(ans, dp[1+i][N+i] + A[i]); 
    cout << ans << endl;
}
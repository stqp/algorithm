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

ll N;
ll dp[500][500]; // interval dp. maximum.
ll W[500];

int main() {
    while(true) {
        cin>>N;
        if (N==0) break;
        rep(i,0,N) cin>>W[i];
        rep(i,0,500)rep(j,0,500) dp[i][j] = 0;

        repe(n,2,N) {
            repe(l,0,N-n) {
                ll r = l + n;
                if (n%2==0 && dp[l+1][r-1] == ((r-1)-(l+1)) && abs(W[l]-W[(r-1)]) <= 1) dp[l][r] = r-l;
                rep(k,1,n) dp[l][r] = max(dp[l][r], dp[l][l+k] + dp[l+k][r]);
            }
        }
        cout << dp[0][N] << endl;
    }
}
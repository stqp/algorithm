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
ll MOD = 1000*100;

const static ll _N = 200;
const static ll _W = 100000;

ll dp[_N][_W]; // i番目で重さwを超えない最大価値 

int main() {
    ll N,W;
    cin>>N>>W;
    ll ws[_N];
    ll vs[_N];
    rep(i,0,N) cin >> ws[i] >> vs[i];

    repe(n,0,N) {
        repe(w,0,W) {
            if (w-ws[n] >= 0) dp[n+1][w] = max(dp[n][w], dp[n][w-ws[n]] + vs[n]);
            else dp[n+1][w] = dp[n][w];
        }
    }
    cout << dp[N][W] << endl;

}
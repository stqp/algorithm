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
ll MOD = 1000*1000*1000 + 7;

const static ll _H = 1000 + 10;
const static ll _W = 1000 + 10;
char ma[_H][_W];

static ll dp[_H][_W]; // 経路数。
static bool done[_H][_W];
ll H,W;

int main() {
    cin>>H>>W;
    ll x,y;
    rep(h,0,H) rep(w,0,W) cin>> ma[h][w];
    
    dp[0][0] = 1;
    rep(h,0,H) rep(w,0,W) {
        if (ma[h+1][w] != '#' && h+1 < H) dp[h+1][w] += dp[h][w] % MOD;
        if (ma[h][w+1] != '#' && w+1 < W) dp[h][w+1] += dp[h][w] % MOD;
    }

    cout << dp[H-1][W-1] % MOD << endl;
}
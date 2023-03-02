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

const ll _N = 4000 + 10;

bool done[_N];
lb dp[_N][_N]; // i番目までのコインを投げて、表がj個となる確率
lb P[_N];
ll N;

int main() {
    cin>>N;
    repe(i,1,N) cin>>P[i];

    lb ans = 0;
    repe(j,1,N) {
        if ((N+1)/2 <= j) ans += dp[N][j];
    }
    printf("%.10Lf\n", ans);
}
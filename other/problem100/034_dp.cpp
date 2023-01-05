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
ll INF (1LL<<62);
// clang-format off

ll dp[100];
ll dps(ll x){
    if (dp[x] != INF) return dp[x];
    dp[x] = dps(x-1) + dps(x-2);
    return dp[x];
}

int main()
{
    ll n;
    cin>>n;
    rep(i,0,100) dp[i] = INF;
    dp[0] = 1;
    dp[1] = 1;
    cout << dps(n) << endl; 
}
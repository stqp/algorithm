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


ll dp[4000][4000] = {0}; // [l,r] のときの X-Y の最大値
ll done[4000][4000] = {0};
ll N;
ll a[4000];

ll dps(ll l, ll r) {
    if (done[l][r]) return dp[l][r];
    if (l==r) return a[l];
    done[l][r] = 1;
    return dp[l][r] = max(a[l] - dps(l+1,r), a[r] - dps(l,r-1));
}

int main()
{
    cin>>N;
    rep(i,0,N)cin>>a[i];
    cout << dps(0,N-1) << endl;
}
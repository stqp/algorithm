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

const ll _N = 1000 + 10;

bool done[_N];
lb dp[_N][_N]; // i番目までのコインを投げて、表がj個となる確率
lb P[_N];
ll N;


int main() {
    ll N; cin>>N;
    string S; cin>>S;

    ll x = 0;
    ll y = 0;
    set<pair<ll,ll>> dp({{0,0}});

    rep(i,0,S.size()) {
        ll s = S[i];
        if (s == 'R') x++;
        if (s == 'L') x--;
        if (s == 'U') y++;
        if (s == 'D') y--;

        pair<ll,ll> np = make_pair(x,y);
        if (dp.find(np) != dp.end()) {
            cout << "Yes" << endl;
            return 0;
        }
        dp.insert(np);
    }
    cout << "No" << endl;

}
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

const static ll _S = 3000 + 10;
const static ll _T = 3000 + 10;
ll dp[_S][_T]; // s, t 番目についてLCS。

int main() {
    string S,T; cin>>S>>T;

    // fill dp table.
    rep(s,0,S.size())
        rep(t,0,T.size()) {
        if (S[s] == T[t]) dp[s+1][t+1] = max(dp[s+1][t+1], dp[s][t] + 1);
        else dp[s+1][t+1] = max(dp[s+1][t], dp[s][t+1]);
    }

    // generate answer by traversing dp table.
    string ans;
    ll s = S.size();
    ll t = T.size();
    while(s > 0 && t > 0) {
        if (dp[s][t] == dp[s-1][t-1]) {s--; t--;}
        else if (dp[s][t] == dp[s][t-1]) t--;
        else if (dp[s][t] == dp[s-1][t]) s--;
        else {
            ans += S[s-1]; // "s-1" is arragement for index.
            s--;t--;
        }
    }
    
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
}
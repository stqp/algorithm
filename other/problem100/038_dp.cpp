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
// ll Null = (1LL<<60);
ll Null = -1;
// clang-format off

// Si 、Ti 番目までのLCS
ll dp[1010][1010];
string S,T;

ll dps(ll s, ll t) {
    if(dp[s][t] != Null) return dp[s][t];

    if (S[s-1] == T[t-1]) dp[s][t] = max(dps(s-1,t-1)+1, max(dps(s-1,t), dps(s,t-1)));
    else dp[s][t] = max(dps(s-1,t), dps(s,t-1));
    
    return dp[s][t];
}

int main()
{
    ll Q;
    cin>>Q;
    rep(i,0,Q) {
        cin>>S>>T;
        ll SL = S.length();
        ll TL = T.length();
        repe(s,0,SL)repe(t,0,TL) dp[s][t] = Null;

        repe(s,0,SL) dp[s][0] = 0;
        repe(t,0,TL) dp[0][t] = 0;
        cout << dps(SL,TL) << endl;
    }
}
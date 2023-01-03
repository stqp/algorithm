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
#define rep(i, l, r) for(ll i = l; i < (ll)(r); i++)
#define repe(i, l, r) for(ll i = l; i <= (ll)(r); i++)


ll Q[1010*1010+10];

int main() {
    ll N,M;
    cin>>N>>M;
    ll S[1000+10];
    rep(i,0,N) cin>>S[i];
    S[N] = 0;

    ll idx = 0;
    rep(i,0,N+1)
        rep(j,0,N+1) {
            Q[idx] = S[i]+S[j];
            idx++;
        }

    sort(Q,Q+(N+1)*(N+1));

    ll ans = 0;
    rep(i,0,(N+1)*(N+1)) {
        ll a = upper_bound(Q,Q+(N+1)*(N+1),M-Q[i])-Q-1;
        if (a < 0 || a == (N+1)*(N+1)) continue;
        ans = max(ans, Q[i] + Q[a]);
    }
    cout << ans << endl;
}
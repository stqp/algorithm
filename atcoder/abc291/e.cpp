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
ll MOD = 998244353;

const ll _N = 2*100000 + 10;

int main() {
    ll N,M; cin>>N>>M;
    
    vector<vector<ll>> G(N);
    vector<ll> deg(N);

    ll x,y;
    rep(m,0,M) {
        cin>>x>>y;
        x--;y--;
        G[x].push_back(y);
        deg[y]++;
    }

    vector<ll> L(N);
    vector<ll> S;
    ll cnt = 0;

    rep(i,0,N) if (deg[i] == 0) S.push_back(i);

    while (S.size() > 0) {
        if (S.size() != 1) {
            cout << "No" << endl;
            return 0;
        }
        ll v = S.back(); S.pop_back();
        L[v] = ++cnt;
        for(ll vv: G[v]) if (!--deg[vv]) S.push_back(vv);
    }

    cout << "Yes" << endl;
    rep(n,0,N-1) cout << L[n] << " ";
    cout << L[N-1] << endl;
}


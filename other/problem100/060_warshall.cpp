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

ll V,E;
ll G[200][200];
ll D[200][200];

int main() {
    cin>>V>>E;
    rep(s,0,V)rep(t,0,V) G[s][t] = INF;
    rep(s,0,V)rep(t,0,V) D[s][t] = INF;
    rep(s,0,V)rep(t,0,V) if (s == t) G[s][t] = 0;

    rep(i,0,E) {
        ll s,t,d;
        cin>>s>>t>>d;
        G[s][t] = d;
    }

    rep(i,0,V)rep(s,0,V)rep(t,0,V){
        if (G[s][i] != INF && G[i][t] != INF) G[s][t] = min(G[s][t], G[s][i] + G[i][t]);
    }

    rep(i,0,V) if (G[i][i] < 0) {
        cout << "NEGATIVE CYCLE" << endl;
        return 0;
    }
    rep(s,0,V){
        rep(t,0,V) {
            if (G[s][t] != INF) cout << G[s][t];
            else cout << "INF";
            if (t == V-1) cout << endl;
            else cout << " ";
        }
    } 
}
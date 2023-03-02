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

struct Edge {
    set<Edge*> pres;
    set<Edge*> nxts;
    ll v = -1;
};

Edge topo[_N];


// 解けてない。
int main() {
    ll N,M; cin>>N>>M;
    bool ok = true;

    repe(i,1,M) {
        ll x,y;
        cin >>x>>y;
        topo[x].nxts.insert(&topo[y]);
        topo[y].pres.insert(&topo[x]);
    }

    ll root = -1;
    repe(i,1,N) {
        if (topo[i].pres.size() == 0) root = i;
    }

    Edge *e = &topo[root];

    repe(i,1,N) {
        if (e == NULL) break;

        if (i == 1) {
            if (e->pres.size() != 0 || e->nxts.size() != 1) ok = false;
        } else if (i == N) { 
            if (e->pres.size() != 1 || e->nxts.size() != 0) ok = false;
        } else {
            if (e->pres.size() != 1 || e->nxts.size() != 1) ok = false;
        }
 
        e->v = i;
        if (i < N) e = *(e->nxts.begin());
    }

    repe(i,1,N) if (topo[i].v == -1) ok = false;

    if (!ok) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    repe(i,1,N-1) cout << topo[i].v << " ";
    cout << topo[N].v << endl;
}
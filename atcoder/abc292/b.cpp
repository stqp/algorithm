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

ll C[_N];

int main() {
    ll N,Q; cin>>N>>Q;
    rep(i,0,Q) {
        ll c,x; cin>>c>>x;
        if (c == 1) C[x]++;
        if (c == 2) C[x] += 2;
        if (c == 3) 
            if (C[x] >= 2) cout << "Yes" << endl;
            else cout << "No" << endl;
    }
}
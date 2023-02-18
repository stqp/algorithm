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
ll INF = (1LL << 62);

ll V, E, S;
ll D[1000 * 1000]; // 最小値
map<ll, vector<pair<ll, ll>>> ES;

int main() {
    cin >> V >> E >> S;
    rep(i, 0, E) {
        ll s, t, d;
        cin >> s >> t >> d;
        ES[s].push_back(make_pair(t, d));
    }
    rep(i, 0, V) D[i] = INF;

    queue<ll> qs;
    qs.push(S);
    D[S] = 0;
    while (!qs.empty()) {
        ll q = qs.front(); qs.pop();

        vector<pair<ll, ll>> ns = ES[q];
        for (pair<ll, ll> n : ns) {
            if (D[n.first] > D[q] + n.second) {
                D[n.first] = D[q] + n.second;
                qs.push(n.first);
            }
        }
    }

    rep(i, 0, V) {
        if (D[i] == INF) cout << "INF" << endl;
        else cout << D[i] << endl;
    }
}
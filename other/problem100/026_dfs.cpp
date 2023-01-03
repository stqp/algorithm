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

ll N, Q;
vector<ll> ps[1000 * 1000];
ll ans[1000 * 1000];
ll done[1000 * 1000];

void dfs(ll p, ll x)
{
    if (done[p])
        return;
    done[p] = 1;
    ans[p] += x;
    rep(i, 0, ps[p].size())
    {
        dfs(ps[p].at(i), ans[p]);
    }
}

int main()
{
    rep(i, 0, 1000 * 1000) ans[i] = 0;
    rep(i, 0, 1000 * 1000) done[i] = 0;

    cin >> N >> Q;
    rep(i, 1, N)
    {
        ll a, b;
        cin >> a >> b;
        ps[a].push_back(b);
        ps[b].push_back(a);
    }
    rep(i, 0, Q)
    {
        ll p, x;
        cin >> p >> x;
        ans[p] += x;
    }
    dfs(1, 0);
    repe(i, 1, N)
    {
        cout << ans[i];
        if (i == N)
            cout << endl;
        else
            cout << " ";
    }
}
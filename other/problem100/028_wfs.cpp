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

vector<int> g[1000];
ll d[1000];
queue<int> t;

void wfs()
{
    while (!t.empty())
    {
        ll i = t.front();
        t.pop();
        for (ll j : g[i])
        {
            if (d[j] == -1 || d[i] + 1 < d[j])
            {
                d[j] = d[i] + 1;
                t.push(j);
            }
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    rep(i, 0, n)
    {
        ll id, k;
        cin >> id >> k;
        rep(j, 0, k)
        {
            ll x;
            cin >> x;
            g[id].push_back(x);
        }
    }

    rep(i, 0, 1000) d[i] = -1;
    d[1] = 0;
    t.push(1);
    wfs();

    repe(i, 1, n)
    {
        cout << i << " " << d[i] << endl;
    }
}
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

queue<int> vs[1000];
pair<int, int> ans[1000];
int key = 1;

void dfs(int id)
{
    if (ans[id].first > 0)
        return;
    ans[id].first = key;
    key++;
    queue<int> node = vs[id];
    while (!node.empty())
    {
        int next = node.front();
        node.pop();
        dfs(next);
    }
    ans[id].second = key;
    key++;
}

int main()
{
    ll N;
    cin >> N;
    repe(i, 1, N)
    {
        ll id, d;
        cin >> id >> d;
        rep(j, 0, d)
        {
            ll x;
            cin >> x;
            vs[id].push(x);
        }
    }

    repe(i, 1, N)
    {
        dfs(i);
    }

    repe(i, 1, N)
    {
        cout << i << " " << ans[i].first << " " << ans[i].second << endl;
    }
}
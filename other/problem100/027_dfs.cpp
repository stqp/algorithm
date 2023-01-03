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

bool mm[100][100];

ll ans = 0;
ll m, n;

void dfs(ll x, ll y, ll d)
{
    if (mm[x][y] == 0)
        return;

    mm[x][y] = 0;
    ans = max(ans, d);
    ll dx[] = {-1, 0, 1, 0};
    ll dy[] = {0, -1, 0, 1};
    rep(i, 0, 4)
    {
        ll nx = x + dx[i];
        ll ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= n || ny >= m)
            continue;
        dfs(nx, ny, d + 1);
    }
    mm[x][y] = 1;
}

int main()
{
    cin >> m >> n;
    rep(i, 0, n) rep(j, 0, m) cin >> mm[i][j];
    rep(i, 0, n) rep(j, 0, m)
    {
        dfs(i, j, 1);
    }
    cout << ans << endl;
}
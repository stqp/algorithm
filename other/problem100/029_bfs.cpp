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

char c[100][100];
ll d[100][100];
queue<pair<ll, ll>> q;

int main()
{
    ll R, C;
    cin >> R >> C;
    ll SY, SX, GY, GX;
    cin >> SY >> SX >> GY >> GX;
    repe(y, 1, R) repe(x, 1, C)
    {
        cin >> c[y][x];
        d[y][x] = -1;
    }

    q.push(make_pair(SX, SY));
    d[SY][SX] = 0;
    while (!q.empty())
    {
        ll dx[] = {-1, 0, 1, 0};
        ll dy[] = {0, -1, 0, 1};
        pair<ll, ll> n = q.front();
        q.pop();
        rep(i, 0, 4)
        {
            ll x = n.first;
            ll y = n.second;
            ll nx = x + dx[i];
            ll ny = y + dy[i];
            if (nx < 1 || ny < 1 || nx > C || ny > R)
                continue;
            if (c[ny][nx] == '#')
                continue;
            if (d[ny][nx] == -1 || d[ny][nx] > d[y][x] + 1)
            {
                d[ny][nx] = d[y][x] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    cout << d[GY][GX] << endl;
}
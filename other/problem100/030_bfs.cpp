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
// clang-format off

char c[1010][1010];
pair<ll, ll> fs[10];
ll d[1010][1010];

int main()
{
    ll H, W, R;
    ll SY, SX;
    cin >> H >> W >> R;
    repe(y, 1, H) repe(x, 1, W) {
        cin >> c[y][x];
        if (c[y][x] == 'S') {
            SY = y;
            SX = x;
        }
        if (c[y][x] != 'S' || c[y][x] != '.' || c[y][x] != 'X') fs[c[y][x] - '0'] = make_pair(x, y);
    }
    queue<pair<ll,ll>> goals;
    repe(i,1,R) goals.push(fs[i]);
    pair<ll,ll> start = make_pair(SX, SY);

    ll ans = 0;
    while(!goals.empty()) {
        pair<ll,ll> goal = goals.front();
        goals.pop();
        ll gx = goal.first;
        ll gy = goal.second;
        ll sx = start.first;
        ll sy = start.second;
        rep(i,0,1010)rep(j,0,1010) d[i][j] = -1;
        d[sy][sx] = 0;

        queue<pair<ll,ll>> q;
        q.push(start);
        while (!q.empty()) {
            ll dx[] = { -1, 0, 1, 0 };
            ll dy[] = { 0, -1, 0, 1 };
            pair<ll, ll> n = q.front();
            q.pop();
            rep(i, 0, 4) {
                ll x = n.first;
                ll y = n.second;
                ll nx = x + dx[i];
                ll ny = y + dy[i];
                if (nx < 1 || ny < 1 || nx > W || ny > H) continue;
                if (c[ny][nx] == 'X') continue;
                if (d[ny][nx] == -1 || d[ny][nx] > d[y][x] + 1) {
                    d[ny][nx] = d[y][x] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
        ans += d[gy][gx];
        start = goal;
    }

    cout << ans << endl;
}
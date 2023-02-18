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

char c[2000][2000];
ll d[2000][2000];
queue<pair<ll, ll>> q;

int main() {
  ll M, N;
  cin >> N >> M;

  ll SX, SY, GX, GY;
  rep(m, 0, M) rep(n, 0, N) {
    cin >> c[m][n];
    d[m][n] = -1;

    if (c[m][n] == 's') {
      SY = m;
      SX = n;
    }
    if (c[m][n] == 'g') {
      GY = m;
      GX = n;
    }
  }

  q.push(make_pair(SX, SY));
  d[SY][SX] = 0;
  while (!q.empty())
  {
    ll dx[] = { -1, 0, 1, 0 };
    ll dy[] = { 0, -1, 0, 1 };
    pair<ll, ll> n = q.front();
    q.pop();
    rep(i, 0, 4)
    {
      ll x = n.first;
      ll y = n.second;
      ll nx = x + dx[i];
      ll ny = y + dy[i];
      if (nx < 0 || ny < 0 || nx > N || ny > M)
        continue;
      if (c[ny][nx] == '1')
        continue;
      if (d[ny][nx] == -1 || d[ny][nx] > d[y][x] + 1)
      {
        d[ny][nx] = d[y][x] + 1;
        q.push(make_pair(nx, ny));
      }
    }
  }
  if (d[GY][GX] == -1) cout << "Fail" << endl;
  else cout << d[GY][GX] << endl;


}
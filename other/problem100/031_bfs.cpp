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

int main() {
    ll W,H;
    bool c[200][200];
    cin >> W >> H;
    rep(y,0,H)rep(x,0,W) cin >> c[y][x];
    
    ll even_dx[] = { 0, 0, 1, 1,-1, 1};
    ll even_dy[] = { 1,-1, 1,-1, 0, 0};
    ll odd_dx[] =  {-1,-1, 0, 0,-1, 1};
    ll odd_dy[] =  {-1, 1,-1, 1, 0, 0};

    rep(sy,0,H)rep(sx,0,W) {
        if (c[sy][sx]) continue;

        queue<pair<ll,ll>> q;
        q.push(make_pair(sx,sy));
        bool d[200][200];
        rep(i,0,200)rep(j,0,200) d[i][j] = false;
        d[sy][sx] = true;
        bool found_outside = false;
        while(!q.empty()) {
            if (found_outside) break;
            ll x = q.front().first;
            ll y = q.front().second;
            q.pop();
            ll *dx;
            ll *dy;
            if (y%2 == 0) {
                dx = even_dx;
                dy = even_dy;
            }else {
                dx = odd_dx;
                dy = odd_dy;
            }
            rep(i,0,6) {
                ll nx = x + dx[i];
                ll ny = y + dy[i];
                if (nx < 0 || ny < 0 || nx >= W || ny >= H) {
                    found_outside = true;
                    break;
                }
                if (d[ny][nx]) continue;
                if (c[ny][nx]) continue;
                q.push(make_pair(nx,ny));
                d[ny][nx] = true;
            }
        }
        if (!found_outside) c[sy][sx] = true;
    }

    ll ans = 0;
    rep(y,0,H)rep(x,0,W) {
        if (!c[y][x]) continue;
        ll *dx;
        ll *dy;
        if (y%2 == 0) {
            dx = even_dx;
            dy = even_dy;
        }else {
            dx = odd_dx;
            dy = odd_dy;
        }
        rep(i,0,6) {
            ll nx = x + dx[i];
            ll ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= W || ny >= H || !c[ny][nx]) ans++;
        }
    }
    cout << ans << endl;
}
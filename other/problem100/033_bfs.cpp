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

ll d[100][100];
pair<ll,ll> p[100][100];

int main()
{
    ll H,W;
    char s[100][100];
    cin>>H>>W;
    rep(y,1,H+1)rep(x,1,W+1) cin>>s[y][x];
    rep(y,1,H+1)rep(x,1,W+1) {
        p[y][x] = make_pair(-1,-1);
        d[y][x] = -1;
    }

    queue<pair<ll,ll>> q;
    q.push(make_pair(1,1));
    
    ll dx[] = {-1, 0, 1, 0};
    ll dy[] = { 0,-1, 0, 1};
    d[1][1] = 0;
    bool is_goal = false;
    while(!q.empty()){
        pair<ll,ll> n = q.front();
        q.pop();
        ll x = n.first;
        ll y = n.second;
        if (y == H && x == W) continue;

        rep(i,0,4){
            ll nx = x + dx[i];
            ll ny = y + dy[i];
            if (nx < 1 || ny < 1 || nx > W || ny > H) continue;
            if (s[ny][nx] == '#') continue;
            if (d[ny][nx] == -1 || d[ny][nx] > d[y][x] + 1) {
                d[ny][nx] = d[y][x] + 1;
                q.push(make_pair(nx,ny));
                p[ny][nx] = make_pair(x,y);
            }
        }
    }
    
    if (d[H][W] == -1) {
        cout << "-1" << endl;
        return 0;
    }

    ll x = W;
    ll y = H;
    s[1][1] = 'X';
    s[H][W] = 'X';
    while (!(x == 1 && y == 1)) {
        ll nx = p[y][x].first;
        ll ny = p[y][x].second;
        s[ny][nx] = 'X';
        x = nx;
        y = ny;
    }

    ll ans = 0;
    rep(y,1,H+1)rep(x,1,W+1) {
        if (s[y][x] == '.') ans++;        
    }

    cout << ans << endl;
}
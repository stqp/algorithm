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

int c[10000][10000];
int W, H;

void dfs(int h, int w)
{
    if (c[h][w] == 0)
        return;
    c[h][w] = 0;
    int dh[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dw[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    rep(i, 0, 8)
    {
        int nh = h + dh[i];
        int nw = w + dw[i];
        if (nh < 0 || nw < 0 || nh >= H || nw >= W)
            continue;
        dfs(nh, nw);
    }
}

int main()
{
    while (true)
    {
        cin >> W >> H;
        if (W == 0 && H == 0)
        {
            break;
        }
        rep(h, 0, H) rep(w, 0, W)
        {
            cin >> c[h][w];
        }

        int ans = 0;
        rep(h, 0, H) rep(w, 0, W)
        {
            if (c[h][w] == 1)
            {
                ans++;
                dfs(h, w);
            }
        }
        cout << ans << endl;
    }
}
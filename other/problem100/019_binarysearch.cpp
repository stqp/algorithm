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
#define rep(i, l, r) for(int i = l; i < (int)(r); i++)
#define repe(i, l, r) for(int i = l; i <= (int)(r); i++)

static int d[100*1000+10];
static int k[100*1000];
static int D,n,m;

int search(int l, int r, int t) {
    int mid = l + (r-l)/2;
    if (d[mid] <= t && t <= d[mid+1]) {
        return min(abs(d[mid]-t), abs(d[mid+1]-t));
    }
    if (d[mid+1] < t) return search(mid+1, r, t);
    if (t < d[mid]) return search(l, mid-1, t);
    return 0;
}

int main() {
    cin >>D>>n>>m;
    d[0] = 0;
    rep(i,1,n) cin>>d[i];
    sort (d, d+n);
    rep(i,0,m) cin>>k[i];
    d[n] = D;
    n++;

    int ans = 0;
    rep(i,0,m) ans += search(0, n-1, k[i]);
    cout << ans << endl;

    return 0;

}
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

int main() {
    int N,M;
    cin>>N>>M;
    // bool xy[100][100];
    bitset<30> xy[100];

    rep(i,0,M){
        int x,y;
        cin>>x>>y;
        xy[x-1].set(y-1);
        xy[y-1].set(x-1);
    }
    rep(i,0,N){
        xy[i].set(i);
    }

    int ans = 0;
    repe(i,1,1<<N) {
        bool ok = true;
        bitset<30> p = bitset<30>(i);
        rep(j,0,N){
            if(!(i>>j & 1)) continue;
            if(p != (xy[j] & p)) ok = false;
        }
        if (ok) ans = max(ans, int(p.count()));
    }
    cout << ans << endl;
    return 0;
}

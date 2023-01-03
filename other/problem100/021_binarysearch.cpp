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
#define ll long long

ll H[1000 * 1000];
ll S[1000 * 1000];

int main() {
    int N;
    cin>>N;
    rep(i,0,N) cin>>H[i]>>S[i];

    ll l = 0;
    ll r = 1LL<<60;
    while (r-l>1) {
        ll mid = (l+r)/2;
        bool ok = true;
        
        ll t[1000 * 1000];
        rep(i,0,N) t[i] = 0;
        rep(i,0,N) {
            if (mid - H[i] < 0) ok = false; 
            else t[i] = (mid - H[i]) / S[i];
        }

        sort(t, t+N);
        rep(i,0,N) {
            if (t[i] < i) ok = false;
        }
        if(ok) r = mid; 
        else l = mid;
    }
    cout << r << endl;
}
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
    int N,K;
    long long a[100];
    cin>>N>>K;
    rep(i,0,N) cin>>a[i];

    long long ans = pow(10,15);
    rep(i,1,1<<N){
        bitset<50> p = bitset<50>(i);
        if (p.count() != K) continue;

        long long sum = 0LL;
        long long _max = 0LL;
        rep(j,0,N){
            if ( !(i>>j & 1) ) {
                _max = max(_max, a[j]);
                continue;
            }else{
                long long dy = max(0LL, _max - a[j] + 1LL);
                _max = max(_max, a[j] + dy);
                sum += dy;
            }
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;
    return 0;
}
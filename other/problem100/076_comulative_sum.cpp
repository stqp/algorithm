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
ll INF = (1LL<<62);
ll MOD = 1000*1000*1000 + 7;

const static ll MAX_DP = 5 * 3000;
ll dp[MAX_DP][MAX_DP];

int main() {
    ll N;
    ll A[MAX_DP];
    cin>>N;
    rep(i,0,N) cin>>A[i];

    rep(i,0,N) {
        ll sum = 0;
        rep(j,i,N) {
            sum += A[j];
            dp[i][j] = sum;
        }
    }

    ll ans[MAX_DP];
    rep(i,0,N) {
        rep(k,0,N) {
            if (i+k < N) ans[k] = max(ans[k], dp[i][i+k]);
        }
    }
    
    rep(i,0,N){
        cout << ans[i] << endl; 
    }
}
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

ll dp[200][200] = {0};
ll N;
ll M[200];

int main()
{
    cin>>N;
    rep(i,0,N) {
        cin>>M[i]>>M[i+1];
    }
    repe(n,2,N){
        repe(l,0,N-n) {
            ll r = l+n;
            dp[l][r] = INF;
            repe(i,l,r) {
                dp[l][r] = min(dp[l][r], dp[l][i] +  M[l]*M[i]*M[r] + dp[i][r]);
            }
        }
    }

    cout << dp[0][N] << endl;
}
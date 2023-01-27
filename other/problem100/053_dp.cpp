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

ll N;
ll A[100*1000];
ll dp[100*1000]; // dp[k]:=  長さkとなるLISの中で、列最後の要素の最小値

int main() {
    cin>>N;
    rep(i,0,N) cin>>A[i];
    rep(i,0,N) dp[i] = INF;

    dp[1] = A[0];
    rep(i,1,N) {
        
    }
}
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
#include <regex>
#include <tuple>
#include <cassert>
#include <bitset>
using namespace std;
#define ll long long
#define lb long double
#define us unsigned short
#define rep(i, l, r) for (ll i = l; i < (ll)(r); i++)
#define repe(i, l, r) for (ll i = l; i <= (ll)(r); i++)
ll INF = (1LL<<62);
ll MOD = 1000*100;

const static ll MAX_DP = 10*1000*1000;
ll dp[MAX_DP];

string trim(string x) {
    return regex_replace(x, regex(":"), "");
}

int main() {
    while(true) {
        ll N; cin>>N;
        if (N == 0) return 0;

        string A,B;
        rep(i,0,MAX_DP) dp[i] = 0;

        rep(i,0,N) {
            cin>>A>>B;
            ++dp[stoll(trim(A))];
            --dp[stoll(trim(B))];
        }
        rep(i,1,MAX_DP){
            dp[i] += dp[i-1];
        }

        ll ans = 0;
        rep(i,0,MAX_DP) ans = max(ans, dp[i]);
        cout << ans << endl;
    }

}
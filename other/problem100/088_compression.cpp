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

const static ll MAX_DP = 1000 * 1000;
ll A[MAX_DP];
ll B[MAX_DP];

int main() {
  ll N; cin>>N;
  rep(i,0,N) cin >> A[N];

  ll ri = 0; // rightmost index.
  B[ri] = 1;
  ll lc = A[0]; // leftmost color. 0 is white, 1 is black.

  // 理解できてない
  // rep(i,1,N) {
  //   if (lc == A[i]) {
  //     B[ri]++;
  //   } else if ((i+1) % 2 == 0) {
  //     if (ri == 0) {
  //       B[ri]++;
  //       lc = A[i];
  //     } else {
  //       B[ri-1] += B[ri] + 1;
  //       ri--;
  //     }
  //   } else {
  //     ri++;
  //     B[ri] = 1;
  //   }
  //   lc = A[i];
  // }

  // ll ans = 0;
  // rep(i,0,N){
  //   if (B[i] == 0) ans++;
  // }

  // cout << ans << endl;

}
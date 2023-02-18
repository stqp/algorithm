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

ll quick_pow(ll m, ll n, ll mod){
  if (n == 0) return 1;
  if (n % 2 == 1) return m * quick_pow(m, n-1, mod) % mod;
  if (n % 2 == 0) return quick_pow( (m*m) % mod, n/2, mod);
  return -1;
}

int main() {
  ll M,N; cin>>M>>N;
  ll MOD = 1000000007;
  cout << quick_pow(M,N,MOD) << endl;
}
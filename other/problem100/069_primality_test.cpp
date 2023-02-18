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

ll Q;
bool m[100*1000+10];
ll d[100*1000+10];

void prime_test(){
  for (ll i = 2; i < 100*1000+10; i++) {
    if (!m[i]) continue;
    for (ll j = i*2; j < 100*1000+10; j += i) {
      m[j] = false;
    }
  }
}

int main() {
  rep(i,0,100*1000+10) m[i] = true;
  m[0] = false;
  m[1] = false;
  prime_test();

  ll ans = 0;
  rep(i,0,100*1000+10) {
    if (i%2 == 1 && m[i] && m[(i+1)/2]) ans++;
    d[i] = ans;
  }

  cin>>Q;
  rep(q,0,Q) {
    ll l,r;
    cin>>l>>r;
    cout << d[r] - d[l-1] << endl;
  }
}
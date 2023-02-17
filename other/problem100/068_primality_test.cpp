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

void prime_factorial(ll n) {
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      cout << i << " ";
      prime_factorial(n / i);
      return;
    }
  }
  cout << n;
}

ll N;
int main() {
  cin>>N;
  cout << N << ": ";
  prime_factorial(N);
  cout << endl;
}
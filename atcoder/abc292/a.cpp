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

const ll _N = 4000 + 10;

bool done[_N];
ll N;

int main() {
    // char a = 'a';
    // char b = 'b';
    // char A = 'A';
    // char B = 'B';
    // cout << int(a) << endl;
    // cout << int(b) << endl;
    // cout << int(A) << endl;
    // cout << int(B) << endl;
    string s;
    cin >> s;
    for(char c: s) {
        cout << char(c-32);
    }
    cout << endl;
}
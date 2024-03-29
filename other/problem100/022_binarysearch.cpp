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
#define ll long long
#define lb long double

int main() {
    lb p;cin>>p;
    lb x = (-3.0/2.0)*log2(3.0/(2.0*p*log(2)));
    lb ans = x + p*pow(2.0, (-2.0*x)/3.0);
    if (x < 0) {
        ans = p;
    }
    printf("%.10Lf\n", ans); 
    return 0;
}
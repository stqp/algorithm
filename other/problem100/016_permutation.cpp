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

bool same(int a[], int b[], int n) {
    rep(i,0,n) if (a[i] != b[i]) return false;
    return true;
}

int main() {
    int N;
    int n[10];
    int P[10];
    int Q[10];
    cin>>N;
    rep(i,0,N) n[i] = i+1;
    rep(i,0,N) cin>>Q[i];
    rep(i,0,N) cin>>P[i];

    int p,q;
    int i = 0;
    do {
        if (same(n, P, N)) p = i;
        if (same(n, Q, N)) q = i;
        i++;
    } while (next_permutation(n, n+N));
    cout << abs(p-q) << endl;
    return 0;

}
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

static ll N;
static int A[100*1000+10];
static int B[100*1000+10];
static int C[100*1000+10];

// int search(int s[], int l, int r, int t){
//     if (r < l) return -1;
//     int mid = l + (r-l)/2;
//     if (s[mid] < t && t <= s[mid+1]) return mid;
//     if (t <= s[mid]) return search(s, l, mid-1, t);
//     if (s[mid] < t) return search(s, mid+1, r, t);
//     return -1;
// }

int main() {
    cin>>N;
    rep(i,0,N) cin>>A[i];
    rep(i,0,N) cin>>B[i];
    rep(i,0,N) cin>>C[i];
    sort(A,A+N);
    sort(B,B+N);
    sort(C,C+N);

    ll ans = 0;
    rep(i,0,N) {
        ll al = lower_bound(A,A+N,B[i]) - A;
        ll cl = upper_bound(C,C+N,B[i]) - C;
        ans += (al) * (N - cl);
    }

    cout << ans << endl;
    return 0;

}
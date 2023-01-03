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

bool search(int S[], int l, int r, int t) {
    if (r < l) return false;

    int k = l + (r-l)/2;
    if (S[k] == t) {
        return true;
    } else if (S[k] < t) {
        return search(S,k+1,r,t);
    } else {
        return search(S,l,k-1,t);
    }
    return false;    
}

int main() {
    int n,q;
    int S[100*1000];
    int T[100*1000];
    cin>>n;
    rep(i,0,n) cin>>S[i];
    cin>>q;
    rep(i,0,q) cin>>T[i];

    int ans = 0;
    rep(i,0,q) if (search(S, 0, n-1, T[i])) ans++;
    
    cout << ans << endl;
    return 0;
}
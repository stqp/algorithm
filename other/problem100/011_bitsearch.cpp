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

int main() {
    int N,M;
    vector<int> s[10];
    int p[10];
    cin>>N>>M;

    rep(i,0,M){
        int a;cin>>a;
        rep(j,0,a){
            int b;cin>>b;
            s[i].push_back(b-1);         
        }
    }
    rep(i,0,M) cin>>p[i];

    int ans = 0;
    rep(i,0,1<<N) {
        int ok = 0;
        rep(j,0,M) {
            int count = 0;
            rep(k,0,s[j].size()) {
                if ((i >> s[j].at(k)) & 1) count++ ; 
            }
            if (count % 2 == p[j]) ok++;
        }
        if (ok == M) ans++;
    }
    cout << ans << endl;
    return 0;
}
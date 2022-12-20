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

int main() {
    srand((unsigned) time(NULL));
    int N = 1000;
    int c[10000];
    for (int i=0; i<N; i++) c[i] = i;
    
    sort(c, c+N);
    
    int L = 300;
    int R = 400;

    int ans = 0;
    for (int i=0; i<N; i++) {
        int l = lower_bound(c, c+N, L - c[i]) - c;
        int r = lower_bound(c, c+N, (R + 1) - c[i]) - c;
        ans += (r-l);
    }
    cout << "ans: " << ans << endl;
}
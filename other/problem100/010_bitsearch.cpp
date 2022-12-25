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
    int N;
    int A[20];
    int Q;
    int M[200];
    cin>>N;
    for(int i=0;i<N;i++) cin>>A[i];
    cin>>Q;
    for(int i=0;i<Q;i++) cin>>M[i];

    bitset<20*2000> dp;
    dp.set(0);

    for (int i=0;i<N;i++) dp |= (dp << A[i]);

    for (int i=0;i<Q;i++) {
        if (dp[M[i]]) cout << "yes" << endl;
        else cout << "no" << endl;
    }    

    return 0;
}
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
    long long A[30];
    long long B[30];
    cin>>N;

    long long ans = 0LL;
    for (int i=0;i<N;i++){
        cin>>A[i]>>B[i];
        ans += B[i] - A[i];
    }
    sort(A, A+N);    
    sort(B, B+N);

    for (int i=0;i<N; i++) {
        ans += abs(A[i] - A[N/2]);
        ans += abs(B[i] - B[N/2]);
    }

    cout << ans << endl;
    return 0;
}
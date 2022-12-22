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

static int N = 30;

void normal_dp(int A[], int k) {
    int dp[1000];
    dp[0] = 1;
    for (int i=0; i<N; i++){
        for (int j=k-A[i]; j>=0; j--){
            if(dp[j] == 1) dp[j+A[i]] = 1;
        }
    }
    cout << dp[k] << endl;
}

void bitdp(int A[], int k){
    bitset<1000000> dp;
    dp.set(0);
    for (int i=0; i<N; i++) dp = (dp | dp << A[i]);
    cout << dp[k] << endl;
}

int main() {
    int A[N];
    int k = (N / 2);
    srand((unsigned) time(NULL));
    for (int i=0; i<N; i++) A[i] = rand() % N * (N/10);
    sort(A, A+N);

    cout << "A[] : " ;
    for (int i=0; i<N; i++) cout << A[i] << " ";
    cout << endl;
    cout << "k : " << k << endl;
    cout << "=========" << endl;

    normal_dp(A, k);
    bitdp(A, k);
}
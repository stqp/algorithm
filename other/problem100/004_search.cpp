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
    int N, M;
    int A[100][100];
    cin >> N >> M;
    for (int i=0; i<N; i++)
        for (int j=0; j<M; j++)
            cin >> A[i][j];

    long ans = 0LL;
    for (int i=0; i<M; i++) {
        for (int j=i+1; j<M; j++) {
            long sum = 0LL;
            for (int k=0; k<N; k++) {
                sum += max(A[k][i], A[k][j]);
            }
            ans = max(ans, sum);
        }
    }
    
    cout << ans << endl;
    return 0;
}
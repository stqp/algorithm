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
    srand((unsigned) time(NULL)) ;

    int N = 10;
    int A[100][100];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++){
            if (A[i][j] != 0) continue;
            A[i][j] = rand()%100 + 1;
            A[j][i] = A[i][i];
        }
    }

    int p[100];
    for (int i=0; i<N; i++) p[i] = i;

    int ans = 2147483648 - 1;
    do {
        int sum = 0;
        for (int i=0; i<N-1; i++) sum += A[p[i]][p[i+1]];
        ans = min(ans, sum);
    } while(next_permutation(p, p+N));

    cout << ans << endl;
}
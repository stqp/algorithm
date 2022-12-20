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
    int ti = clock();

    srand((unsigned) time(NULL));
    int N = 20000;
    int c[100000];
    for (int i=0; i<N; i++) c[i] = rand();

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++){
            if (c[i] > c[j]) swap(c[i], c[j]);
        }
    }
    // for (int i=0; i<N; i++) cout << c[i] << endl;

    printf("Exec time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);

}
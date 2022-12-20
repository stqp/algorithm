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
    // int N = 10;
    int c[100000];
    for (int i=0; i<N; i++) c[i] = rand();
    
    sort(c, c+N);
    // for (int i=0; i<N; i++) cout << c[i] << endl;

    printf("Exec time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);


}
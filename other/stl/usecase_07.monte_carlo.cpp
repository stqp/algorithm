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
    double N = 100000;
    int k = 0;
    double x, y;
    for (int i=0; i<N; i++){
        x = (rand() % 32767 / 32767.0);
        y = (rand() % 32767 / 32767.0);
        if (x*x + y*y <= 1) k++;
    }
    printf("PI = %.5lf\n", 4*k/N);
}
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
using namespace std;

int main(){
    int N=4;
    int c[100];
    for (int i=0; i<N; i++) c[i] = i + 1;

    sort(c, c+N);

    do {
        for (int i=0; i<N; i++) cout << c[i] << " ";
        cout << endl;
    } while(next_permutation(c, c+N));
}
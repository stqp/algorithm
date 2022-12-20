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
using namespace std;

int main(){
    tuple<string, int, int> t;

    get<0>(t) = "first";
    get<1>(t) = 2;
    get<2>(t) = 3;

    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    cout << get<2>(t) << endl;

    tuple<int, int, int> ts[10];

    srand((unsigned) time(NULL));

    int N = 10;
    for (int i=0; i<N; i++) {
        int r = rand() % 100;
        get<0>(ts[i]) = r;
        get<1>(ts[i]) = r + 1;
        get<2>(ts[i]) = r + 2;
    }

    for (int i=0; i<N; i++) {
        cout << get<0>(ts[i]) << " " << get<1>(ts[i]) << " " << get<2>(ts[i]) << endl;
    }


}
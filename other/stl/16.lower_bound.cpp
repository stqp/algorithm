#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
using namespace std;
#define rep(i, l, r) for(int i = l; i < (int)(r); i++)

int main(){
    int N = 10;
    int c[100];
    for (int i=0; i<N; i++) c[i] = i*2;
    
    rep(i,0,N) cout << c[i] << " " ;
    cout << endl;

    int key = 5;
    cout << "lower_bound: " << lower_bound(c, c+N, key) - c << endl;
    cout << "upper_bound: " << upper_bound(c, c+N, key) - c << endl;
}

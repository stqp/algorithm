#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main(){
    cout << max({1,2,3}) <<endl;

    int N, c[100000], minx = 2^32;

    cin>> N;
    for (int i=1; i<=N; i++) cin >> c[i];
    for (int i=1; i<=N; i++) minx = min(minx, c[i]);

    cout << minx << endl;

    cout << *min_element(c + 1, c + N + 1) << endl;
    
}
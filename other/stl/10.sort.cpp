#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
using namespace std;

int main() {
    
    srand((unsigned) time(NULL));
    int c[10];
    int N = 10;
    for (int i=0;i<N;i++) c[i] = rand() % 100;
    
    sort(c+5, c+N);
    cout << "== partially sorted ==" << endl;
    for (int i=0;i<N;i++) cout << c[i] << endl;

    sort(c, c+N);
    cout << "== sorted ==" << endl;
    for (int i=0;i<N;i++) cout << c[i] << endl;

    sort(c, c+N, greater<int>());
    cout << "== sorted reverse ==" << endl;
    for (int i=0;i<N;i++) cout << c[i] << endl;

}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    int c[10];
    int N = 10;

    for (int i=0;i<N;i++) c[i] = i;
    
    for (int i=0;i<N;i++) cout << c[i] << endl;
    reverse(c, c+N);
    cout << "== reversed ==" << endl;
    for (int i=0;i<N;i++) cout << c[i] << endl;

    reverse(c, c+N);
    reverse(c+5, c+N);
    cout << "== partially reversed ==" << endl;
    for (int i=0;i<N;i++) cout << c[i] << endl;


}
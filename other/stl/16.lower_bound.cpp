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

int main(){
    srand((unsigned) time(NULL));
    
    int N = 10;
    int c[100];
    for (int i=0; i<N; i++) c[i] = rand()%100;
    
    sort(c, c+N);
    int x = 50;
    cout << "bound : " << x << endl;
    cout << "lower : " << lower_bound(c, c+N, x) -c << endl;
    for (int i=0; i<N; i++) cout << c[i] << endl;

}
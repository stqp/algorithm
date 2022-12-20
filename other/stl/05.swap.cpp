#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    // int a,b;
    // cin >> a>>b;
    // swap(a,b);
    // cout << a << ", " << b << endl;

    int N, c[1000];
    cin>>N;
    for (int i=1; i<=N;i++) cin >> c[i];
    for (int i=1; i<=N; i++) {
        for (int j=i+1; j<=N; j++) {
            if (c[i] > c[j]) swap(c[i], c[j]);
        }
    }
    for (int i=1; i<=N; i++) cout << c[i] << endl;
}
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;

    cout << __gcd(a,b) << endl;
    cout << a/__gcd(a,b)*b << endl;
}
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
    int n, x;

    while(1) {
        cin >> n >> x;
        if (n == 0 && x == 0) return 0;
        int sum = 0;
        for (int i=1; i<=n;i++) {
            for (int j=i+1; j<=n; j++){
                for (int k=j+1; k<=n; k++) {
                    if (i+j+k == x) sum++; 
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
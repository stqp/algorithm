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
    int n;
    cin >> n;

    int ans = 0;
    for (int i=1; i<=n; i++) {
        if (i % 2 == 0) continue;
        int sum = 0;
        for (int j=1; j<=n; j++) {
            if (i % j == 0) sum++;
        }
        if (sum == 8) ans++;
    }
    cout << ans << endl;
    return 0;
}
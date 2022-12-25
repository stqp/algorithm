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
    int A,B,C,X,Y;
    cin>>A>>B>>C>>X>>Y;

    int ans = 2147483647;
    int c = max(X, Y) * 2;
    for (int i=0; i<=c; i++) {
        ans = min(ans, C*i + max(0, A*(X-i/2)) + max(0, B*(Y-i/2)));
    }
    cout << ans << endl;
    return 0;
}
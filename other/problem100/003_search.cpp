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
    string s;
    cin >> s;
    
    static int N = 1000;
    bool arr[N];
    for(int i=0;i<N;i++) arr[i] = false;
    arr['A'] = true;
    arr['C'] = true;
    arr['G'] = true;
    arr['T'] = true;

    int ans = 0;
    for (int l=0; l<s.length(); l++) {
        for (int r=s.length()-1; r>=l; r--) {
            bool ok = true;
            for (int i=l; i<=r; i++) {
                if (!arr[s[i]]) { 
                    ok = false; 
                    break; 
                }
            }
            if (ok) ans = max(ans, r-l+1); 
        }
    }
    cout << ans << endl;
}
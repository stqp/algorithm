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
#define rep(i, l, r) for(int i = l; i < (int)(r); i++)
#define repe(i, l, r) for(int i = l; i <= (int)(r); i++)

int main() {
    int R,C;
    cin>>R>>C;
    bool xy[10][10*1000];
    rep(i,0,R)
        rep(j,0,C){
            cin >> xy[i][j];
        }

    int ans = 0;
    rep(i,0,1<<R) {
        bool copy_xy[10][10*1000];
        rep(j,0,R) rep(k,0,C) copy_xy[j][k] = xy[j][k];
        
        rep(j,0,R) {
            if (i>>j & 1) {
                rep(k,0,C) {
                    copy_xy[j][k] = !copy_xy[j][k];
                }
            }
        }

        int sum = 0;
        rep(j,0,C) {
            int count = 0;
            rep(k,0,R) {
                if(copy_xy[k][j]) count++;
            }
            if (count <= R/2) count = R - count;
            sum += count;
        }

        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
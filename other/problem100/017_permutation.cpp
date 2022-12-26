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


bool putQueen(bool xy[8][8], int x, int y) {
    // validation.
    int dx[] = {-1, -1,  1, 1, -1,  0, 1, 0};
    int dy[] = {-1,  1, -1, 1,  0, -1, 0, 1};
    rep(j,0,8) {
        int nx = x;
        int ny = y;
        while(true) {
            nx += dx[j];
            ny += dy[j];
            if (nx < 0 || ny < 0 || nx >= 8 || ny >= 8) break;
            if(xy[nx][ny]) return false;
        }
    }
    // put queen.
    xy[x][y] = true;
    return true;
}

bool takeQueen(bool xy[8][8], int x, int y) {
    xy[x][y] = false;
    return true;
}

bool ans[8][8];
void solve(bool xy[8][8], int k) {
    if (k==0) {
        rep(l,0,8)rep(m,0,8) ans[l][m] = xy[l][m];
        return;
    }
    bool t_xy[8][8];
    rep(i,0,8)rep(j,0,8) t_xy[i][j] = xy[i][j];

    rep(i,0,8)rep(j,0,8) {
        if (!t_xy[i][j]) {
            if(!putQueen(t_xy, i, j)) continue;
            solve(t_xy, k-1);
            takeQueen(t_xy, i, j);
        }
    }
}


int main() {
    int K;
    cin>>K;
    bool xy[8][8];
    rep(i,0,8)rep(j,0,8) xy[i][j] = false;
    rep(i,0,K) {
        int x,y;
        cin>>x;cin>>y;
        xy[x][y] = true;
    }
    solve(xy, 8-K);

    rep(i,0,8){
        rep(j,0,8){
            if (ans[i][j]) cout << "Q";
            else cout << ".";
        }
        cout << endl;
    }
    return 0;
}


// This is useless, because 64! is too big.
// int main() {
//     int K;
//     cin>>K;
//     bool xy_m[8][8];
//     rep(i,0,K) {
//         int x,y;
//         cin>>x;cin>>y;
//         xy_m[x][y] = true;
//     }
//     int xy[8*8];
//     rep(i,0,8*8) xy[i] = i;
//     bool tmp_xy_m[8][8];
//     bool ok = true;
//     do {
//         rep(i,0,8) rep(j,0,8) tmp_xy_m[i][j] = xy_m[i][j];
//         rep(i,0,(8-K)) {
//             int x = xy[i] / 8;
//             int y = xy[i] % 8;
//             rep(j,0,8) if(tmp_xy_m[x][j]) ok = false;
//             rep(j,0,8) if(tmp_xy_m[j][y]) ok = false;
//             int dx[] = {-1, -1,  1, 1};
//             int dy[] = {-1,  1, -1, 1};
//             rep(j,0,2) {
//                 int nx = x;
//                 int ny = y;
//                 while(true) {
//                     nx += dx[j];
//                     ny += dy[j];
//                     if (nx < 0 || ny < 0 || nx >= 8 || ny >= 8) break;
//                     if(tmp_xy_m[nx][ny]) ok = false;
//                 }
//             }
//             if(!ok) break;
//             tmp_xy_m[x][y] = true;
//         }
//         if (ok) {
//             rep(i,0,8)rep(j,0,8){
//                 if (tmp_xy_m[i][j]) cout << "Q";
//                 else cout << ".";
//             }
//             cout << endl;
//             break;
//         }
//     } while (next_permutation(xy, xy+8*8));
//     return 0;
// }
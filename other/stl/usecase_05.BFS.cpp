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

map<int, int> cache;
long factorial(int x) {
    if (cache.find(x) != cache.end()) return cache[x];
    long sum = 1LL;
    for (int i=0;i<x;i++) sum *=2;
    cache[x] = sum;
    return sum;
}

int max_int(){
    return 99;
    // return (int)factorial(31) - 1;
}

int main() {
    int H = 5;
    int W = 5;
    int c[5][5] = {
        {'S', '.','.','.','.'},
        {'.', '#','#','#','.'},
        {'.', '.','.','#','.'},
        {'.', '#','.','#','.'},
        {'.', '.','.','.','.'},
    };

    int d[5][5];
    for (int w=0; w<W;w++){
        for (int h=0;h<H;h++){
            d[w][h] = max_int();
        }
    }

    queue<pair<int, int>> q;
    q.push(make_pair(0,0));

    d[0][0] = 0;
    int dh[] = {-1,0,1, 0};
    int dw[] = { 0,1,0,-1};
    // search start.
    while (!q.empty()){
        int curh = q.front().first;
        int curw = q.front().second;
        q.pop();

        for (int i=0;i<4;i++){
            int nexth = curh + dh[i];
            int nextw = curw + dw[i];
            if (!(nexth >= 0 && nexth < H && nextw >= 0 && nextw < W)) continue;
            if (!(c[nexth][nextw] == '.' && d[nexth][nextw] == max_int())) continue;
            q.push(make_pair(nexth, nextw));
            d[nexth][nextw] = d[curh][curw] + 1;   
        }
    }

    // result
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (j >= 1) cout << " ";
            cout << d[i][j];
        }
        cout << endl;
    }
}
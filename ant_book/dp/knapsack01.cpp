#include <bits/stdc++.h>
using namespace std;

static const int MAX_N = 100;

int n, W;

int w[MAX_N], v[MAX_N];


int rec(int i, int j){
  int res;
  if ( i == n){
    return 0;
  } else if (j < w[i]){ // 超えるので入れずに次にいく。
    return rec(i + 1, j);
  } else {
    return max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
}

int main(){

  n = 4;
  W = 5;
  w[0] = 2;
  w[1] = 1;
  w[2] = 3;
  w[3] = 2;
  v[0] = 3;
  v[1] = 2;
  v[2] = 4;
  v[3] = 2;

  printf("%d¥n", rec(0, W));
  
}


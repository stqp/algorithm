#include <bits/stdc++.h>
using namespace std;

static const int MAX_N = 100;
static const int MAX_W = 100;

int w[] = {2,1,3,2};
int v[] = {3,2,4,2};
int n = 4;
int W = 5;

int dp[MAX_N + 1][MAX_W + 1];

void pdp(){
  for(int i=0; i<n; i++){
    for(int j=0; j<W; j++){
      printf("%d ", dp[i][j]);
    }
    cout << endl;
  }
  cout << "======" << endl;
}

int rec(int i, int j){
  if (dp[i][j] >= 0) {
    return dp[i][j];
  }
  int res;
  if (i == n){
    res = 0;
  } else if (j < w[i]){
    res = rec(i + 1, j);
  } else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  pdp();
  return dp[i][j] = res;
}

int main(){
  memset(dp, -1, sizeof(dp));
  printf("%d¥n", rec(0, W));
}
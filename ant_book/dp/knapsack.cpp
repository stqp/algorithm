#include <iostream>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)






int N = 4;
int w[] = {2,1,3,2};
int v[] = {3,2,4,2};
int W = 5;

int memo[100+10][100+10];

int dp(int i, int w_rest){

  if(memo[i][w_rest]>=0){
    return memo[i][w_rest];
  }

	if(i == N){
    memo[i][w_rest] = 0;
  }else if(w_rest - w[i] < 0){
    memo[i][w_rest] = dp(i+1, w_rest);
  }else{
    memo[i][w_rest] = max(dp(i+1, w_rest - w[i]) + v[i], dp(i+1,w_rest));  
  }
	
  return memo[i][w_rest];
}

int main(){
  memset(memo, -1, sizeof(memo));
	cout << dp(0,W) << endl;
}
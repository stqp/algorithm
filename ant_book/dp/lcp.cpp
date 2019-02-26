#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
  int n; cin>>n;
  int m; cin>>m;
  string s; cin>>s;
  string t; cin>>t;
  
  int dp[110][110];

  memset(dp, 0, sizeof(dp));

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(s.at(i) == t.at(j)){
        dp[i+1][j+1] = dp[i][j]+1;
      }else{
        dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
      }
    }
  }
  for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
      cout << dp[i][j] << " " ;
    }
    cout << endl;
  }
  cout << dp[n][m] << endl;
}
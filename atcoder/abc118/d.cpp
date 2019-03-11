#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int n;
int m;
int a[10];
int v[10]={0, 2 , 5 , 5 , 4 , 5 , 6 , 3 , 7 , 6}; 

string dp[10000]

int dfs(int mat){

  if(dp[mat] != "") return dp[mat];

  int ans = -1;
  rep(i,m){
    if( mat-v[a[i]] < 0 ) return -1;
    else if( mat-v[a[i]] == 0) return num*10+a[i];
    else ans = max(ans, dfs(mat-v[a[i]], num*10+a[i]));
  }
  return ans;
}

int main(){
  cin>>n>>m;
  rep(i,m)cin>>a[i];
  dfs(n);
  cout << dp[n] << endl;

}
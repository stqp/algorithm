#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;




int N,M;
//int A_max = 1000 * 1000 * 1000;
//int B_max = 1000 * 100;
//int A[A_max];
//int B[B_max];

//int dp[A_max][B_max];

int dfs(int i, int res){
  return 0;
}


int main(){
  cin>>N>>M;

  vector<pair<int, int> > pairs(N);

  rep(i,N){
    cin>>pairs[i].first;
    cin>>pairs[i].second;
  }

  sort(pairs.begin(), pairs.end());

  long long total = 0;
  int num = 0;
  int f = false;
  rep(i,N){
    rep(j, pairs[i].second){
      if(num == M) break;
      num++;
      total += (long long)pairs[i].first;
    }
    if(f) break;
  }
  cout<< total << endl;


}
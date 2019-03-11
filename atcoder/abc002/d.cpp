#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <iomanip>
#include <set>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int N,M;
int static const n_max = 15;
int r[n_max][n_max];

int c=1;
set<int> sts[n_max];

int dfs(vector<int> candidate){
  rep(i, candidate.size()){
    
  }
}


int main(){
  memset(r,0,n_max*n_max);
  cin>>N>>M;
  int a,b;
  rep(i,M){
    cin>>a>>b;
    r[a][b] = 1;
  }

  int c = 0;
  rep(i,n_max)rep(j,n_max){
    
    if(r[i][j] != 1 || r[j][i] != 1) continue;
    
    if(sts[0].size() == 0){
      sts[0].insert(i);
      sts[0].insert(j);
      c++;
      continue;
    }

    bool isHit = false;
    rep(k, c){
      if(sts[k].count(i) == 1 || sts[k].count(j) == 1 ){
        sts[k].insert(i);
        sts[k].insert(j);
        isHit = true;
      }
    }
    if(isHit == false){
      sts[c].insert(i);
      sts[c].insert(j);
      c++;
    }
  }

  int m = 0;
  rep(i,c){
    m = max(m, int(sts[i].size()));
  }
  cout << m << endl;

  //rep(i,n_max)rep(j,n_max)cout << r[i][j]<<endl;



}
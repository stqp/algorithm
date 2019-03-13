#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


struct UnionFind{
  int static const n_max = 1000 * 1000 ;
  int par[n_max];
  int rank[n_max];

  void init(int n){
    for(int i=0;i<n;i++){
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x){
    if(par[x] == x){
      return x;
    }else{
      return par[x] = find(par[x]);
    }
  }

  void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return ;

    if(rank[x] < rank[y]){
      par[x] = y;
    }else{
      par[y] = x;
      if(rank[x] == rank[y]) rank[x]++;
    }
  }

  bool same(int x, int y){
    return find(x) == find(y);
  }
};

int static const N_MAX = 1000 * 100 + 100;
int N,M;
int P[N_MAX];

int main(){

  cin>>N>>M;
  rep(i,N){
    cin>>P[i]; P[i]--;
  }

  UnionFind uf;uf.init(N);
  int x,y;
  rep(i,M){
    cin>>x>>y;x--;y--;
    uf.unite(x,y);
  }

  int ans = 0;
  rep(i,N){
    if( uf.same(P[i], i) ) ans++;
  }
  
  cout<< ans << endl;

}



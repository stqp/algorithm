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


int static const n_max = 1000 * 1000 ;
struct UnionFind{

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

int N,Q;
int main(){
  cin>>N>>Q;
  UnionFind uf; uf.init(N);
  int P,A,B;
  rep(i,Q){
    cin>>P>>A>>B;
    if(P==0) uf.unite(A,B);
    else if(P==1){
      if(uf.same(A,B))cout<< "Yes" << endl;
      else cout<< "No" <<endl;
    } 
  }
}


#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<=(n);i++)
using namespace std;

void pri(int x,int y,int z){
  cout << x << " "<< y << " " <<z<<endl;
}

int main(){
  int n,m; cin>>n>>m;

  // i:2, j:3, k:4
  rep(j,n){
    int res_foot = m - 3*j;
    int res_man = n - j;
    
    if(  res_foot%2 == 0 
      && 2 * res_man <= res_foot
      && res_foot <= 4 * res_man ){

      int k = (res_foot - 2*res_man)/2;
      int i = res_man - k;
      pri(i,j,k);
      return 0;
    }
  }
  pri(-1,-1,-1);
}
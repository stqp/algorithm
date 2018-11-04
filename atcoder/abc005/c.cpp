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
  int t,n;cin>>t>>n;
  int n_max = 110;
  int a[n_max];rep(i,n)cin>>a[i];
  int m;cin>>m;
  int b[n_max];rep(i,m)cin>>b[i];

  rep(i,m){
    bool f = false;
    rep(j,n){
      if(a[j] == -1) continue;
      if( (b[i]- a[j]) >= 0 && (b[i]- a[j])<=t){
        a[j] = -1;
        f = true;
        break;
      }
    }
    if(!f){
      cout << "no"<<endl; 
      return 0;
    }
  }
  cout << "yes" << endl;

}
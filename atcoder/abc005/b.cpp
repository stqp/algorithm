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
  int n;cin>>n;
  int mi=110;
  int t;
  rep(i,n){
    cin>>t;
    mi = min(mi,t);
  }
  cout << mi << endl;

}
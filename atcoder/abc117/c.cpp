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


int const static n_max = 100000;
int n,m,x[n_max+10],l[n_max+10];

int main(){
  cin>>n>>m;
  rep(i,m)cin>>x[i];

  if ( n>=m){
    cout << 0 << endl;
    return 0;
  }

  sort(x,x+m);

  for(int i=1;i<m;i++){
    l[i-1] = x[i]-x[i-1];
  }

  sort(l,l+m-1);

  int sum = 0;
  for(int i=m-1-1;i > m-n-1;i--){
    sum += l[i];
  }
  cout << ((x[m-1]-x[0]) - sum) << endl;
  
}
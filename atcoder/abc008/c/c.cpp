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
int c[110];

int get_divisor(int j){
  int res = 0;
  //int cei = min((int)ceil(sqrt(c))+2, c);
  for(int i=0;i<n;i++){
    if( i != j && c[j] % c[i] == 0) res++;
  }
  return res;
}


int main(){
  cin>>n;
  rep(i,n)cin>>c[i];

  long double res  = 0;
  rep(i,n){
    int s = get_divisor(i);
    if(s % 2 == 0){
      long double tmp = (long double)(s+2) /  (long double)(2.0*s+2.0);
      res += tmp;
    }else{
      res += 1.0/2.0;
    }
  }
  
  cout << fixed <<  setprecision(15) << res << endl;
}


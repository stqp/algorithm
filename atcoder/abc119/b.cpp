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

int main(){
  int const static N = 10;
  int n;cin>>n;
  double x[N];
  string u[N];

  rep(i,n){
    cin >> x[i];
    cin >> u[i];
  }
  double rate = 380000.0;
  double sum = 0;
  rep(i,n){
    if(u[i] == "JPY"){
      sum += double(x[i]);
    }else if( u[i] == "BTC"){
      sum += double(x[i] * rate );
    }
  }
  cout << fixed;
  cout << setprecision(10) << sum << endl;
}

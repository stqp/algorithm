#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
using namespace std;


int combi(int x, int y){
  if(x == y || x == 0 || y == 0) return 1;
  int numer = 1; // 分子
  int denom = 1; // 分母
  int d_denom = y;
  for(int i = x; i > x-y ; i--){
    numer *= i;
    denom *= d_denom;
    d_denom--;
  }
  return (int)numer/denom;
}

int main(){

  int r,c,x,y,d,l;

  cin>>r>>c>>x>>y>>d>>l;

  cout << combi(5,5) << endl;
  cout << "====" << endl;
  int s = x*y - (d+l);

  cout << combi(x*y,d) * combi(x-d,s) * (r-y+1) * (c-x+1) << endl;


}
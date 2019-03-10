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



string S;
int main(){
  cin>>S;

  int num_zero = 0;
  int num_one = 0;

  rep(i,S.size()){
    if( S.at(i) == '0') num_zero++;
    if( S.at(i) == '1') num_one++;
  }

  cout << min(num_zero,num_one) * 2 << endl;


}
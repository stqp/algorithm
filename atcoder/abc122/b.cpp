#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#include <cstdlib>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


string s;
int main(){
  cin>>s;

  int now_max = 0;
  int count = 0;

  for(int i=0;i<s.size();i++){
    char b = s[i];
    if( b == 'A' || b == 'T' || b == 'C' || b == 'G'){
      count++;
    }else{
      count = 0;
    }
    now_max = max(now_max, count);
  }
  cout<< now_max <<endl;

}
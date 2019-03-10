#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


long long A,B;

int main(){
  cin>>A>>B;

  long long res = A;

  long long seven = 10000000;
  if( ((A > seven) || (B > seven)) && (B-A)>10){
    if( A > seven ) A -= seven;
    if( B > seven ) B -= seven;
    res = A;
    for(long long i=A+1; i<=B-2;i++){
      res = (res^i);
    }
    if( (B-A+1)%2 == 1 ) res += seven;
  }else{
    for(long long i=A+1; i<=B;i++){
      res = (res^i);
    }
  }

  cout<< (res) << endl;
}
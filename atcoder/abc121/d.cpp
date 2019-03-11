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

long A,B;

long res(long in){
  long ans = 0;
  if(in == 1) return 1;
  if(in % 2 == 0){
    if( (in/2)%2 == 0){
      ans = in^0;
    }else{
      ans = in^1;
    }
  }else{
    if( ((in+1)/2)%2 == 0){
      ans = 0;
    }else{
      ans = 1;
    }
  }
  return ans;
}

int main(){
  cin>>A>>B;
  //cout<<res(A-1)<<endl;
  //cout<<res(B)<<endl;
  if(A == 0){
    cout<<res(B)<<endl;
  }else{
    cout<< (res(A-1)^res(B)) << endl;
  }

}
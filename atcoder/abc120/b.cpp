#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#define rep(i,n) for(int i=1;i<=(n);i++)
using namespace std;


int A,B,K;
int l[110];
int c=0;

int main(){
  cin>>A>>B>>K;
  rep(i, min(A,B)){
    if(A%i == 0 && B%i == 0){
      c++;
      l[c] = i;
    }
  }
  for(int i=c;i>0;i--){
    if( (c+1-i) == K) cout << l[i] << endl;
  }

}
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#include <map>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int static const t_max = 2000 * 100 + 100;


int N,Q;
int t[t_max];

int main(){
  //false = 0 = black, true = 1 = white.
  // for the first, all black.
  memset(t, 0, sizeof(t));

  int l,r;
  cin>>N>>Q;
  rep(i,Q){
    cin>>l>>r;
    t[l]++;
    t[r+1]--;
  }

/*
  rep(i,N){
    cout<<"i:"<<i<<" t: "<<t[i]<<endl;
  }
*/
  int sum = 0;
  for(int i=1;i<=N;i++){
    sum += t[i];
    if(sum % 2 == 0) cout<< 0;
    else cout<< 1;
  }
  cout<<endl;
}
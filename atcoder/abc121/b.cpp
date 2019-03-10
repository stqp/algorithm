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

int static const b_max = 200;

int N,M,C;
int a;
int b[b_max];

int main(){
  cin>>N>>M>>C;
  rep(i,M)cin>>b[i];

  int res_count = 0;

  rep(i,N){
    int sum = 0;
    rep(j,M){
      cin>>a;
      sum += a * b[j];
    }
    sum += C;
    if(sum > 0) res_count++;
  }
  cout<< res_count << endl;
}
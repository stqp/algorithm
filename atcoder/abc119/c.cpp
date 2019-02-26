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


int const static N = 10;
int l[N];
int n,A,B,C;

int INF = int(pow(10, 9));


int dfs(int idx ,int a,int b, int c){

  if(idx == N){
    if (min(a,min(b,c)) > 0) return abs(a-A) + abs(b-B) + abs(c-C) - 30;
    else return INF;
  }

  int ret0 = dfs(idx + 1, a, b, c);
  int ret1 = dfs(idx + 1, a + l[idx], b, c) + 10;
  int ret2 = dfs(idx + 1, a, b + l[idx], c) + 10;
  int ret3 = dfs(idx + 1, a, b, c + l[idx]) + 10;

  return min(ret0, min(ret1,min(ret2, ret3)));
  
}

int main(){
  cin>>n>>A>>B>>C;
  rep(i,n) cin>>l[i];
  cout << dfs(0,0,0,0) << endl;
}
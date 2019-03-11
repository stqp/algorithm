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

int static const t_max = (1000 * 100) * 10 + 100;
int static const c_max = 300;

int N,C;
int t[t_max];
int c[c_max];

int main(){
  
  memset(t,0,sizeof(t));
  memset(c,0,sizeof(c));

  cin>>N>>C;
  int si,ti,ci;
  rep(i,N){
    cin>>si>>ti>>ci;
    t[10*si-5]++;
    t[10*ti+1]--;
  }

  int sum = 0;
  int ans = 0;
  for(int i=1;i< t_max;i++){
    sum += t[i];
    ans = max(ans, sum);
  }
  cout << ans << endl;

}
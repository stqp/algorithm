#include <iostream>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
  int c[6] = {3,2,1,3,0,2};
  int v[6] = {1,5,10,50,100,500};
  int a = 620;

  int ans = 0;
  for(int i=5;i>=0;i--){
    int t = min(a/v[i], c[i]);
    a -= v[i] * t;
    ans += t;
  }
  cout << ans << endl;

}
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <queue>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int main(){
  int a,b;cin>>a>>b;

  int ans = 0;
  string s;
  for(int i=a;i<=b;i++){
    s = to_string(i);
    bool forbidden = false;
    for(int j=0;j<s.length();j++){
      if(s.at(j) == '4' || s.at(j) == '9'){
        forbidden = true;break;
      }
    }
    if(forbidden) ans++;
  }
  cout << ans << endl;
}
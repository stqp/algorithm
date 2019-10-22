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

int const static N_MAX = 1000 * 100 + 100;

int N,Q;
string s;
int dp[N_MAX];

int main(){
  cin>>N>>Q;
  cin>>s;
  for(int i=0;i<s.size()-1;){
    if(s[i] == 'A' && s[i+1] == 'C'){
      dp[i+1] = dp[i] + 1;
      i = i + 1;
    }else{
      dp[i+1] = dp[i];
      i = i + 1; 
    }
  }
  for(int i=0;i<Q;i++){
    int l,r;
    cin>>l>>r;
    cout<< dp[r-1] - dp[l-1] <<endl;
  }

}
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


int n;
int l[100];

int main(){
  cin >> n;
  rep(i,n) cin>>l[i];

  int sum = l[0];
  int ma = l[0];
  rep(i,n-1){
    ma = max(ma, l[i+1]);
    sum += l[i+1];
  }
  if(sum - ma > ma) cout << "Yes" ;
  else cout << "No";
  cout << endl;
  
}
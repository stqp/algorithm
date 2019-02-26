#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;


int main(){
  int n; cin >> n;
  int p[10];
  rep(i,n) cin >> p[i];

  int mini = 0;
  int sum = 0;
  rep(i,n){
    sum += p[i];
    if( mini < p[i] ){
      mini = p[i];
    }
  }

  sum -= mini/2;
  cout << sum << endl;
}

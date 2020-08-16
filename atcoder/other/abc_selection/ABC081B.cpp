
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <algorithm>
#include <functional>
using namespace std;

int main(){
  int static N;
  int ans = pow(10,9)+10;

  cin >> N;

  for(int i=0;i<N;i++){
    int v;
    cin >> v;
    int count=0;
    while(v%2==0){
      v = v/2;
      count++;
    }
    ans = min(count, ans);
  }
  cout << ans << endl;


}
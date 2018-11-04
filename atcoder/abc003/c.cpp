#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
using namespace std;

int main(){

  int n,k;
  int const r_max = 4010;
  int r[r_max];

  cin >> n >> k;
  for(int i=0;i<n;i++){
    cin >> r[i];
  }

  sort(r,r+n);

  float c = 0;
  for(int i=n-k;i<n;i++){
    c += r[i] * pow(2,i-n+k);
  }
  c = c / pow(2,k);
  printf("%.5f", c);

}
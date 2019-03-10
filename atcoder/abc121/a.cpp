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


int const static limit = 100;
int t[limit][limit];

int H,W;
int h,w;
int main(){
  cin>>H>>W>>h>>w;
  rep(i,H)rep(j,W)t[i][j] = 1;
  rep(i,h)rep(j,W)t[i][j] = 0;
  rep(j,w)rep(i,H)t[i][j] = 0;
  int sum = 0;
  rep(i,H)rep(j,W) if(t[i][j] == 1) sum++;
  cout<< sum << endl;

}
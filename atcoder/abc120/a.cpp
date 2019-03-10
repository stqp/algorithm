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


int A,B,C;
int main(){
  cin>>A>>B>>C;
  int m = min(B/A,C);
  cout << m << endl;
}
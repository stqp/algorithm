#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<=(n);i++)
using namespace std;

int main(){
  string s;cin>>s;
  if(s == "a") cout << -1;
  else if(s.length() >1 ) cout << "a";
  else cout << (char)(s.at(0)-1);
  cout << endl;
}

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


string b;
int main(){
  cin>>b;
  if(b == "A"){
    cout<<"T";
  }else if(b == "C"){
    cout<<"G";
  }else if(b == "G"){
    cout<<"C";
  }else if(b == "T"){
    cout<<"A";
  }
  cout << endl;
}
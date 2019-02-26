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
  int d; cin >> d;

  if(d == 25){
    cout << "Christmas";
  }else if(d == 24){
    cout << "Christmas Eve";
  }else if(d == 23){
    cout << "Christmas Eve Eve";
  }else if(d == 22){
    cout << "Christmas Eve Eve Eve";
  }
  cout << endl;
}

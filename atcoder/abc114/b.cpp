#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h> 
#define rep(i,n) for(int i=0;i<=(n);i++)
using namespace std;


int to_num(char c){
  return c - 48;
}

int main(){
  string s;cin>>s;

  int mini = 999999999;
  for(int i=0;i<s.length()-2;i++){
    int s1 = to_num(s.at(i))*100 + to_num(s.at(i+1))*10 + to_num(s.at(i+2)) ;

    mini = min(mini, abs(s1 - 753));
  }
  cout << mini << endl;
}

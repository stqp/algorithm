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
  int n;cin>>n;
  int n_max = 1000 * 1000 * 1000;

  int f[] = {false,false,false};

  int count = 0;

  string i_s = "";
  for(int i=100;i<n;i++){
    f[0] = f[1] = f[2] = false;
    i_s = to_string(i);
    bool skip = false;
    for(int j = 0; j< i_s.length();j++){
      char c = i_s.at(j);
      if(to_num(c) == 3){
        f[0] = true;
      }else if(to_num(c) == 5){
        f[1] = true;
      }else if(to_num(c) == 7){
        f[2] = true;
      }else{
        skip = true;
      }
    }
    if(skip) continue;
    if(f[0] == true && f[1] == true && f[2] == true){
      count++ ;
    }
    
  }
  cout << count << endl;

}

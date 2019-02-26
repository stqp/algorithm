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

  int count = 0;

  if(n < 753){
    cout << "0" << endl;
    return 0;
  }



  for(int x=100;x<n*10;x=x*10){

    int digit = 0;
    while(x/10) digit++;
    
    for(int i=1;i< digit;i++){
      
    }
  }
 

}

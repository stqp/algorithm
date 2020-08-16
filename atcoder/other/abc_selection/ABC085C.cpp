
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int n,y;

  cin >> n >> y;

  y = y/1000;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=(n-i);j++){
      for(int k=0;k<=(n-i-j);k++){
        int sum = 10*i + 5*j + k;
        if( (i+j+k) == n && sum == y){
          cout << i<<" "<<j<<" "<<k<<endl;
          return 0;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}
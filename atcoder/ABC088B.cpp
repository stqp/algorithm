#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int n;
  int a[110];

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  sort(a,a+n,greater<int>());

  int alice=0;
  int bob = 0;
  for(int i=0;i<n;i++){
    if(i%2 == 0){
      alice += a[i];
    }else{
      bob += a[i];
    }
  }
  cout << (alice - bob) << endl;

}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int n,a,b;
  cin >> n >> a >> b;

  int sum = 0;
  int num = 0;
  for(int i=1;i<=n;i++){
    num = i;
    int tmp_sum = 0;
    while(num){
      tmp_sum = tmp_sum + (num % 10);
      num = num / 10;
    }
    if(tmp_sum >= a && tmp_sum <= b){
      sum = sum + i;
    }
  }

  cout << sum << endl;

}
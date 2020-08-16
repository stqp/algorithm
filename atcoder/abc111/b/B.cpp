#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int n;
  cin >> n;

  int left = n / 100;

  int first = left*100 + left*10+ left;
  int second = (left+1)*100 + (left+1)*10 + (left+1);

  if(first < n ){
    cout << second;
  }else{
    cout << first;
  }
  cout << endl;
}
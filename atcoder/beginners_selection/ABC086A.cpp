

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
  int a,b;

  cin >> a >> b;

  if(a%2 == 0 or b%2 == 0){
    cout << "Even";
  }else{
    cout << "Odd";
  }
}
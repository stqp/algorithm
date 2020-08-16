#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main(){

  int n;
  cin >> n;

  string c = to_string(n);

  for(int i=0; i< c.size();i++){
    if(c[i] == '1'){
      cout << '9';
    }else{
      cout << '1';
    }
  }

  cout << endl;
}
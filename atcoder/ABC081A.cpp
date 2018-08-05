

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
  string s;

  cin >> s;
  int c;
  for(int i=0;i<s.length();i++){
    if(s[i] == '1') c++;
  }

  cout << c;
}
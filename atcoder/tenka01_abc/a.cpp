#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

using namespace std;


int main(){

  string s ;

  cin >> s;
  if(s.length() == 2){
  	cout << s << endl;
  }else{
  	reverse(s.begin(),s.end());
  	cout << s << endl;
  }

}
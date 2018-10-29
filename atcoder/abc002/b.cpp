#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;


int main(){

  string str;
  cin >> str;

  char exclude[] = {'a','i','u','e','o'};

  for(int i=0;i<str.length();i++){
  	bool f = false;
  	for(int j=0;j<5;j++){
  		if(str.at(i) == exclude[j]) f = true;
  	}
  	if(f) continue;
  	cout << str.at(i);
  }
  cout << endl;

}


#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int m;

  cin >> m;

  if(m < 100){
  	cout << "00";

  }else if(m <= 5000){
  	if(m < 1000){
  		cout << "0"+ to_string(m/100);
  	}else{
  		cout << m/100;
  	}
  }else if(m <= 30000){
  	cout << (m/1000 + 50);
  }else if(m <= 70000){
  	cout << ( (m/1000 -30) /5 + 80);
  }else{
  	cout << "89";
  }
  cout << endl;

}
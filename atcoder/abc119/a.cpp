#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#define rep(i,n) for(int i=0;i<=(n);i++)
using namespace std;

int main(){
  string s; cin >> s;

  int yyyy = stoi(s.substr(0,4));
  int mm = stoi(s.substr(5,2));
  int dd = stoi(s.substr(8,2));

  string heisei = "Heisei";
  string tbd = "TBD";

  if ( yyyy < 2019){
    cout << heisei << endl;
  } else if ( yyyy > 2019){
    cout << tbd << endl;
  } else if ( yyyy == 2019 ){
    if ( 1 <= mm && mm <= 3 ){
      cout << heisei << endl;
    } else if ( mm > 4){
      cout << tbd << endl;
    } else if( mm == 4 ){
      if( 1 <= dd && dd <= 30){
        cout << heisei << endl;
      }else if( 30 < dd && dd <= 31){
        cout << tbd << endl;
      }
    }
  }
}

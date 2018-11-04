#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
using namespace std;

int main(){
  char t[4][4];
  char ans[4][4];

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cin >> t[i][j];
    }
  }

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      ans[i][j] = t[3-i][3-j];
    }
  }

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      cout << ans[i][j];
      if(j!=3) cout << " ";
    }
    cout << endl;
  }

}

#include <bits/stdc++.h>
using namespace std;

int main(){

  int n = 10;

  static int m = 4;
  int v[] = {
    2, 3, 4, 7
  };
  
  for (int bit = 0; bit < (1<<m); bit++){
    vector<int> s;
    for (int i = 0; i<m; i++){
      if (bit & (1<<i)){
        s.push_back(v[i]);
      }
    }
    cout << bit << " : {";
    for (int i = 0; i< s.size(); i++){
      cout << s[i] << " ";
    }
    cout << "}" << endl;
  }


}
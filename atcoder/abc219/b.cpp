#include <bits/stdc++.h>
using namespace std;

int main(){
  static int N = 3;
  vector<string> s(N);
  string t;

  cin >> s[0] >> s[1] >> s[2] >> t;

  for (int i=0; i< t.size(); i++){
    cout << s[int(t.at(i))-48 - 1];
  }

  cout << endl;


}
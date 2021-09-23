#include <bits/stdc++.h>
using namespace std;

int pri[26];

bool comp(string a, string b){
  string l, r;
  
  int size = min(a.size(), b.size());

  for(int i=0; i< size; i++){
    if (a[i] != b[i]) {
      return pri[a[i] - 'a'] < pri[b[i] - 'a'];
    }
  }
  return a.size() <= b.size();
}

int main(){

  string x;
  cin >> x;
  int N;
  cin >> N;
  vector<string> s(N);

  for (int i = 0; i< N; i++) {
    cin >> s[i];
  }

  for(int i = 0; i < x.size(); i++){
    pri[x.at(i) - 'a'] = i;
  }

  sort(s.begin(), s.end(), comp);
  
  for(int i = 0; i < s.size(); i++){
    cout << s[i] << endl;
  }

}
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

bool can_replace(char c){
  char replace[] = {'a','t','c','o','d','e','r'};
  for(int i=0;i<7;i++){
    if(c == replace[i]) return true;
  }
  return false;
}


int main(){
  string a,b;
  cin >> a >> b;

  string win = "You can win";
  string lose = "You will lose";

  for(int i=0;i<a.length();i++){
    // どっちかに@が含まれているかも.
    if(a.at(i) != b.at(i)){
      if(a.at(i) == '@' && b.at(i) != '@'){
        if(!can_replace(b.at(i))){cout<<lose<<endl;return 0;}
      }else if(b.at(i) == '@' && a.at(i) != '@'){
        if(!can_replace(a.at(i))){cout<<lose<<endl;return 0;}
      }else{
        cout<<lose<<endl;
        return 0;
      }
    }
  }
  cout<<win<<endl;

}





#include <iostream>
#include <fstream>
#include <string>

using namespace std;
static  string target;
static  int s_size;

bool solve(int start){
  if(start > s_size){ 
    return false; 
  }
  if(start == s_size){ 
    return true;
  }
  if(target.find("dream", start) == start){
    if(solve(start+5)) return true;
  }
  if(target.find("dreamer", start) == start){
    if(solve(start+7)) return true;
  }
  if(target.find("erase", start) == start){
    if(solve(start+5)) return true;
  }
  if(target.find("eraser", start) == start){
    if(solve(start+6)) return true;
  }
  return false;

}



int main(){

  cin >> target;
  s_size = target.size();

 
  if(solve(0)){
    cout << "YES";
  }else{
    cout << "NO";
  }
  cout << endl;
}
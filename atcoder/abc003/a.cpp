#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;


int main(){

  int n;
  cin >> n;

  int total = 0;
  for(int i=1;i<=n;i++){
    total += i;
  }
  printf("%.5f", 10000.0*total/n);
  cout << endl;

}



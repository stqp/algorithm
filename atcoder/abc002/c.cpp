#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main(){
  int xa,ya, xb,yb, xc,yc;
  cin >> xa>>ya>>xb>>yb>>xc>>yc;
  printf("%.2f",abs((xb-xa)*(yc-ya)-(yb-ya)*(xc-xa))/2.0);
  cout << endl;
}

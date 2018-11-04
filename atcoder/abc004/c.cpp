#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
using namespace std;


void swap(int* x, int* y){
  int tmp = *y;
  *y = *x;
  *x = tmp;
}

int mod(int x, int y){
  while(true){
    if(x == y) return 0;
    if(x < y) return x;
    if(x > y) x -= y;
  }
  return -100;
}

int main(){
  int n;
  cin >> n;
  int card[6] = {1,2,3,4,5,6};

  for(int i=0;i<mod(n,30);i++){
    swap(&card[mod(i,5)], &card[mod(i,5)+1]);
  }
  for(int i=0;i<6;i++){
    cout << card[i];
  }
  cout << endl;


}
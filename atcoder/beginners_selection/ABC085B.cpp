
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
  int n;

  int d[110];

  cin >> n;
  for(int i=0;i<n;i++){
    cin >> d[i];
  }

  sort(d,d+n);

  int max = -1;
  int count = 0;
  for(int i=0;i<n;i++){
    if(max < d[i]){
      count++;
      max = d[i];
    }
  }
  cout << count << endl;

}
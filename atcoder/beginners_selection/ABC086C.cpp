#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

  int n;
  int x[10010];
  int y[10010];
  int t[10010];

  cin >> n;

  x[0] = y[0] = t[0] = 0;

  for(int i=1;i<n+1;i++){
    cin >> t[i] >> x[i] >> y[i];
  }

  for(int i=1;i<n+1;i++){
    int steps = t[i] - t[i-1];
    int dx = (x[i] - x[i-1]) > 0? x[i] - x[i-1]: x[i-1] - x[i];
    int dy = (y[i] - y[i-1]) > 0? y[i] - y[i-1]: y[i-1] - y[i];
    
    int remaining_steps = steps - dx - dy;
    if(remaining_steps < 0 || remaining_steps % 2 != 0){
      cout << "No" << endl;
      return 0;
    }

  }
  cout << "Yes" << endl;
}
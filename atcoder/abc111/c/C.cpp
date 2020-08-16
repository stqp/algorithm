#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){

  int N = 10010;
  int v_odd[N];
  int v_even[N];
  int n;
  cin >> n;

  for(int i=0;i<N;i++){
    v_odd[i] = 0;
    v_even[i] = 0;
  }

  int v_i = 0;
  for(int i=0;i<n;i++){
    cin >> v_i;
    if(i%2 != 0){
      v_odd[v_i] ++;
    }else{
      v_even[v_i] ++;
    }
  }

  int res = 0;
  int max = 0;

  max=0;
  for(int i=0;i<N;i++){
    if(max < v_odd[i]) max = v_odd[i];
  }
  res = res + (n/2 - max);
  
  max = 0;
  for(int i=0;i<N;i++){
    if(max < v_even[i]) max = v_even[i];
  }
  res = res + (n/2 - max);

  cout << res;
  cout << endl;
}
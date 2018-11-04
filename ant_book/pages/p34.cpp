
#include <iostream>
#include <string.h>

using namespace std;


/*

4
1 2 4 7
13


4
1 2 4 7
15

*/
const int MAX_N = 20;

int n;
int a[MAX_N];
int k;

int dfs(int i, int sum){
  if(i == n-1) return 0;
  if( (sum + a[i]) == k || sum == k ) {
   // cout <<  tests << endl;
    cout << endl;
    cout << i << endl;
    cout << endl;
    cout << sum << endl;
    cout << a[i] << endl;
    return 1;
  }

  return dfs(i+1, sum) || dfs(i+1, sum+ a[i]);
}

int main(){
  cin >> n;

  for(int i=0; i< n; i++){
    cin >> a[i];
  }
  cin >> k;

  cout << dfs(0, 0) << endl;

}
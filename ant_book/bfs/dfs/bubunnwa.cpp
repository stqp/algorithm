#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int const static max_n = 100;
int a[max_n];
int n,k;

bool bfs(int i, int sum){
  if(sum == k) return true;
  if(i   == n) return false;
  return bfs(i+1, sum+a[i]) || bfs(i+1, sum);
}


int main(){
  cin>>n;
  rep(i,n)cin>>a[i];
  cin>>k;
  if(bfs(0, 0))cout << "yes"<<endl;
  else cout<<"no"<<endl;

}
//くそー NとMの軸を逆に考えてしまった。

#include <iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int const static max_n = 100;
int n,m;
char t[max_n][max_n];

void bfs(int y, int x){
  t[y][x] = '.';
  int dx[] = {-1,0,1};
  int dy[] = {-1,0,1};
  rep(i,3)rep(j,3){
    if(dx[j]==0 && dy[i]==0) continue;
    if(    x+dx[j] >=0 
        && x+dx[j] < n 
        && y+dy[i] >= 0 
        && y+dy[i] < m 
        && t[y+dy[i]][x+dx[j]] == 'W'){
      bfs(y+dy[i],x+dy[j]);
    }
  }
}

int main(){
  cin>>n>>m;
  rep(i,m)rep(j,n) cin>>t[i][j];
  int ans = 0;
  rep(i,m)rep(j,n){
    if(t[i][j] == 'W'){
      ans++;
      bfs(i,j);
    }
  }
  cout << ans << endl;
}

/*
10 12
W . . . . . . W W .
. W W W . . . W W W
. . . . W W . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . . .
. . . . . . . . W .
. W . . . . . . W .
W . W . . . . W W .
. W . . . . . W W .
W . W . . . . . W W
. W . . . . . . W W
*/
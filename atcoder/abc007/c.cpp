#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <queue>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

int static const max_x = 55;
int static const max_y = 55;
char t[max_x][max_x];
int dp[max_x][max_y];
typedef pair<int,int> P;

int main(){
  int r,c,sy,sx,gy,gx;cin>>r>>c>>sy>>sx>>gy>>gx;
  sx--;sy--;gx--;gy--;

  rep(y,r)rep(x,c){
    cin >> t[x][y];
  }

  memset(dp,-1,max_x*max_y*sizeof(int));
  dp[sx][sy] = 0;
  queue<P> q; q.push(P(sx,sy));


  while(!q.empty()){
    int dx[] = {-1,0,1};
    int dy[] = {-1,0,1};
    P now = q.front();q.pop();

    if(now.first == gx && now.second == gy) break;

    rep(y,3)rep(x,3){
      int nx = now.first + dx[x];
      int ny = now.second + dy[y];

      if(
        nx>=0 && ny>=0 && nx<c && ny<r
        && dx[x]*dy[y] == 0
        && t[nx][ny] != '#'
        ){
        if(dp[nx][ny]==-1
          || dp[nx][ny]>dp[now.first][now.second]+1){
          dp[nx][ny] = dp[now.first][now.second] + 1;
          q.push(P(nx,ny));
        }
      }
    }
  }

  cout << dp[gx][gy] << endl;

  
}

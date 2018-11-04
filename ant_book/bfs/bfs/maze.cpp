#include <iostream>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int n,m;
int const static max_n = 120;
char t[max_n][max_n];
int dp[max_n][max_n];
typedef pair<int,int> p;
queue<p> q;
p start,goal;

void bfs(){
  int dx[] = {-1,0,1};
  int dy[] = {-1,0,1};

  while(!q.empty()){
    p now = q.front();q.pop();
    int x = now.first;
    int y = now.second;
    if(x == goal.first && y == goal.second) continue;

    rep(i,3)rep(j,3){
      int nx = x+dx[i];
      int ny = y+dy[j];

      if(    nx >= 0
          && ny >= 0
          && nx < n
          && ny < m
          && dx[i]*dy[j] == 0
          && (dp[nx][ny] == -1 
              || dp[nx][ny] > dp[x][y]+1)
          && t[nx][ny] != '#' ){
          q.push(p(nx, ny));
          dp[nx][ny] = dp[x][y]+1;
      }
    }
  }
    
}

int main(){
  memset(dp,-1,max_n*max_n*sizeof(int));

  cin >> n>>m;
  rep(i,n)rep(j,m){
    cin>>t[i][j];
    if(t[i][j] == 'S'){
      start = p(i,j);
      dp[i][j] = 0;
    }
    if(t[i][j] == 'G') goal = p(i,j);
  }

  q.push(start);
  bfs();

  cout << dp[goal.first][goal.second] << endl;

}

/*
10 10
# S # # # # # # . #
. . . . . . # . . #
. # . # # . # # . #
. # . . . . . . . .
# # . # # . # # # #
. . . . # . . . . #
. # # # # # # # . #
. . . . # . . . . .
. # # # # . # # # .
. . . . # . . . G #
*/
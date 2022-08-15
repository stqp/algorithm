#include <bits/stdc++.h>
using namespace std;

int n, x, y;
pair<int, int> ab[300];

int min_count = (int)pow(2, 31);

int dp[300][600][600];

int rec(int i, int j, int k)
{
  if (i == 0)
  {
    dp[0][0][0] = 0;
  }
  else if (i == n)
  {
    return;
  }
  else
  {
    dp[i][min(j + ab[i].first, x)][min(k + ab[i].second, y)] = min(dp[i][min(j + ab[i].first, x)][min(k + ab[i].second, y)], dp[i - 1][j][k + 1]);
    rec(i, min(j + ab[i].first, x), min(k + ab[i].second, y));
    dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j][k]);
  }
}

int main()
{
  cin >> n >> x >> y;
  for (int i = 0; i < n; i++)
  {
    cin >> ab[i].first >> ab[i].second;
  }

  pair<int, int> edakiri = {0, 0};
  for (int i = 0; i < n; i++)
  {
    edakiri.first += ab[i].first;
    edakiri.second += ab[i].second;
  }
  if (edakiri.first < x || edakiri.second < y)
  {
    cout << "-1" << endl;
    return 0;
  }

  rec(0, 0, 0);
  cout << dp[n][x][y] << endl;
  return;
}

// void search(int i, int count, int j, int k){
//   if (i == n) {
//     return;
//   } else if (j - ab[i].first <= 0 && k - ab[i].second <= 0) {
//     count = count + 1;
//     min_count = min(min_count, count);
//   } else {
//     search(i + 1, count + 1, j - ab[i].first, k - ab[i].second);
//     search(i + 1, count, j, k);
//   }
// }

// int main(){
//   cin >> n >> x >> y;
//   for (int i = 0; i< n ; i++){
//     cin >> ab[i].first >> ab[i].second;
//   }

//   pair<int, int> edakiri = {0, 0};
//   for (int i = 0; i< n ; i++){
//     edakiri.first += ab[i].first;
//     edakiri.second += ab[i].second;
//   }
//   if (edakiri.first < x || edakiri.second < y){
//     cout << "-1" << endl;
//     return 0;
//   }
//   search(0, 0, x, y);
//   cout << min_count << endl;
//   return 0;
// }
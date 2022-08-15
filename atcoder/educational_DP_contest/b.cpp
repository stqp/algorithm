#include <bits/stdc++.h>
using namespace std;

int N;
int K;
int h[100 * 1000];
int dp[100 * 1000];

int INF = pow(2, 30);

void rec(int i)
{
  if (dp[i - 1] == INF)
  {
    rec(i - 1);
  }
  if (dp[i - 2] == INF)
  {
    rec(i - 2);
  }
  dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
}

int main()
{
  cin >> N;
  cin >> K;
  for (int i = 0; i < N; i++)
  {
    dp[i] = INF;
  }
  for (int i = 0; i < N; i++)
  {
    cin >> h[i];
  }

  dp[0] = 0;
  rec(N);
  cout << dp[N - 1] << endl;
}
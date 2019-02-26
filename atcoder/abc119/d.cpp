#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <math.h>
#include <iomanip>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;

long long const static N = 1000 * 1000 * 100;
int A,B,Q;
long long s[N],t[N],x[N];
long long INF = int(pow(10, 11));


// return idx.
long long uppper_bsearch(long long arr[], long long l, long long r, long long x){
  if(r<=l) return -1;

  int mid = (r-l)/2;
  if(arr[mid] == x) return mid;
  if(mid+1 <= r && x <= arr[mid+1]) return mid+1;
  if(x < arr[mid]) return uppper_bsearch(arr,l,mid-1,x);
  if(arr[mid] < x) return uppper_bsearch(arr,mid+1,r,x);

  return -1;
}

void solve(){
  rep(i,Q){
    long long b,d,res,S,T,d1,d2;
    b = uppper_bsearch(s,0,A-1,x[i]);
    d = uppper_bsearch(t,0,B-1,x[i]);
    cout << "b:" << b << endl;
    cout << "d:" << d << endl;

    res = INF;
    for(int j=-1;j<1;j++){
      S = s[b+j];
      for(int k=-1;k<1;k++){
        T = t[d+k];
        d1 = abs(S-x[i]) + abs(T-S);
        d2 = abs(T-x[i]) + abs(S-T);
        res = min(res, min(d1,d2));
      }
    }
    cout << res << endl;
  }
}

int main(){
  cin>>A>>B>>Q;
  rep(i,A)cin>>s[i];
  rep(i,B)cin>>t[i];
  rep(i,Q)cin>>x[i];
  solve();
}
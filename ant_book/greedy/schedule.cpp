#include <iostream>
#include <queue>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	int static const n = 5;
	int s[] = {1,2,4,6,8};
	int t[] = {3,5,7,9,10};
	typedef pair<int,int> P;
	P itv[n];

	rep(i,n){
		itv[i].first = t[i];
		itv[i].second = s[i];
	}
	sort(itv,itv+n);

	int ans = 0,last = 0;
	rep(i,n){
		if(last < itv[i].second){
			ans++;
			last = itv[i].first;
		}
	}
	cout << ans;


}
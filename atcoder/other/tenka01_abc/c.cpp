#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>    // std::reverse
#include <vector>       // std::vector
#include <list>

using namespace std;

int main(){
	int n;
	int n_max = 10^5+100;
	int a[n_max];
	list<int> lis;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n);

	lis.push_front(a[0]);
	lis.push_back(a[n-1]);
	a[0] = -1;
	a[n-1] = -1;

	for(int i=0;i<n-2;i++){
		int head = *lis.begin();
		int tail = *(--lis.end());
		int index = -1;
		int tmp_max = -1;
		bool is_head = false;

		for(int j=0;j<n;j++){
			if(a[j] == -1) continue;
			if(max(head-a[j], a[j]-head) > tmp_max ){
				is_head = true;
				tmp_max = max(head-a[j], a[j]-head);
				index = j;
			}
			if(max(tail-a[j], a[j]-tail) > tmp_max ){
				is_head = false;
				tmp_max = max(tail-a[j], a[j]-tail);
				index = j;
			}
		}

		if(is_head==true){
			lis.push_front(a[index]);
		}else{
			lis.push_back(a[index]);
		}
		a[index] = -1;
	}

	long int result = 0;
	//cout << "====" << endl;
	for(list<int>::iterator it=lis.begin(); it != --lis.end(); ++it){
		result += max(*it - *(next(it,1)), *(next(it,1)) - *it);
		//cout << *it << endl;
	}
	//cout << "====" << endl;
	cout << result << endl;


}
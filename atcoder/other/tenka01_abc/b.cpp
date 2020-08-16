#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>    // std::reverse
#include <vector>       // std::vector

using namespace std;


void exchange(int *x, int *y){
	int tmp = 0;
	if( *x % 2 != 0){
		*x = *x - 1;
	}
	tmp = *x/2;
	*x = *x - tmp;
	*y = *y + tmp;
}

int main(){

	int a,b,k;
	cin >> a >> b >> k;
	for(int i=0;i<k;i++){
		if(i%2 == 0){
			exchange(&a,&b);
		}else{
			exchange(&b, &a);	
		}
	}
	
	cout << a << " " << b << endl;
}

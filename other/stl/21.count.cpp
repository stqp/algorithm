#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <tuple>
#include <cassert>
using namespace std;

int main(){
    
    int N = 10;
    int a[10] = {1,2,3,4,5,1,2,3,4,4};

    cout << count(a, a + N, 1) << endl;
    cout << count(a, a + N, 4) << endl;

}
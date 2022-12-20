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
    int a[10] = { 1,2,3,5,9,8,7,6};

    cout << find(a, a+N, 9) - a << endl;
    cout << find(a, a+N, 12) - a << endl;
}
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

int fuctorial(int x) {
    int sum = 1;
    for(int i=0;i<x;i++) sum *= 2;
    return sum;
}

int main(){
    int x = fuctorial(16) - 1;
    cout << "x: " << x << " pop: " << __builtin_popcount(x) << endl;
}
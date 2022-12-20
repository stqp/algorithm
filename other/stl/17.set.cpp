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
using namespace std;

int main(){
    set<int> s;

    s.insert(10);    
    s.insert(20);    
    s.insert(30);
    cout << "lower bound: " << (*s.lower_bound(15)) << endl;

    s.erase(20);

    auto itr = s.begin();
    while(itr != s.end()) {
        cout << (*itr) << endl;
        itr++;
    }

}
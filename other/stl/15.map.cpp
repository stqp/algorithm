#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main(){
    map<string, int> m;

    m["name"] = 999;
    m["age"] = 20;
    m["money"] = 10000;

    cout << m["name"] << endl;
    cout << m["age"] << endl;
    cout << m["money"] << endl;
}
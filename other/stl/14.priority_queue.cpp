#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(2);
    p.push(1);
    p.push(3);

    int x1 = p.top();

    p.push(-1);
    p.pop();
    p.pop();

    int x2 = p.top();

    cout << x1 << endl;
    cout << x2 << endl;
}
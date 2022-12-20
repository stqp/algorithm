#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    cout << "size: " << q.size() << endl;
    cout << q.front() << endl;
    cout << "size: " << q.size() << endl;
    q.pop();
    cout << "size: " << q.size() << endl;

}
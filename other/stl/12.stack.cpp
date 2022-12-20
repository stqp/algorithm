#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    s.push(1);
    s.push(2);
    cout << "size: " << s.size() << endl;
    s.top();
    cout << "size: " << s.size() << endl;
    s.pop();
    cout << "size: " << s.size() << endl;

    while (!s.empty()) {
        s.pop();
    }
}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <functional>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(100);
    v.push_back(200);
    v.push_back(300);

    int a = v[0];
    cout << "size: " << v.size() << endl;
    v.pop_back();
    cout << "size: " << v.size() << endl;

}
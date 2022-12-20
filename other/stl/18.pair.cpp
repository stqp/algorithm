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
using namespace std;

int main(){
    pair<string, int> pairs[100];
    srand((unsigned) time(NULL));
    int N = 10;

    for (int i=0; i<N; i++) {
        int no = rand() % 100;
        pairs[i].first = "No" + to_string(no);
        pairs[i].second = no;
    }

    sort(pairs, pairs + N, greater<pair<string, int>>());

    for (int i=0; i<N; i++) cout << pairs[i].first << ", " << pairs[i].second << endl;

}
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
#include <bitset>
using namespace std;

int 
    N, // vertex 
    M, // edge
    A[100009], 
    B[100009];
vector<int> G[100009];

int main() {
    N = 7;
    M = 10;
    G[0].push_back(2);
    G[0].push_back(4);
    G[1].push_back(1);
    G[1].push_back(3);
    G[2].push_back(2);
    G[2].push_back(4);
    G[2].push_back(5);
    G[3].push_back(1);
    G[3].push_back(3);
    G[3].push_back(5);
    G[3].push_back(7);
    G[4].push_back(3);
    G[4].push_back(4);
    G[4].push_back(6);
    G[5].push_back(5);
    G[5].push_back(7);
    G[6].push_back(4);
    G[6].push_back(5);
    G[6].push_back(6);

    for (int i = 0; i < N; i++) {
        cout << "Vertex #" << i << ": {";
        for (int j = 0; j < G[i].size(); j++) {
            if (j >= 1) cout << " ";
            cout << G[i][j];
        }
        cout << "}" << endl;
    }
    return 0;
}
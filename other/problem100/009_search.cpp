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

// bool sign_map[1000*1000][1000*1000];
// bool stardust_map[1000*1000][1000*1000];
// This can't be used.
// Allocated memory is 256MB, but this array size needs more than.

pair<int, int> sign[200];
pair<int, int> stardust[1000];

int main() {
    // for (int i=0;i<1000*1000;i++)
    //     for (int j=0;j<1000*1000;j++) {
    //         sign_map[i][j] = false;
    //         stardust_map[i][j] = false;
    //     }
    int M,N;
    cin>>M;
    for(int i=0;i<M;i++) {
        cin >> sign[i].first;
        cin >> sign[i].second;
        // sign_map[sign[i].first][sign[i].second] = true;
    }
    cin>>N;
    for(int i=0;i<N;i++) {
        cin >> stardust[i].first;
        cin >> stardust[i].second;
        // stardust_map[stardust[i].first][stardust[i].second] = true;
    }

    for (int i=0; i<N;i++){
        int dx = stardust[i].first - sign[0].first;
        int dy = stardust[i].second - sign[0].second;
        bool found = true;
        for (int j=1;j<M;j++) {
            bool found2 = false;
            for (int k=0;k<N;k++){
                if (
                    stardust[k].first == (sign[j].first + dx) &&
                    stardust[k].second == (sign[j].second + dy)
                ) {
                    found2 = true;
                }
            }
            if (!found2) {
                found = false;
                break;
            }
        }
        if (found) {
            cout << dx << " " << dy << endl;
            break;
        }
    }

    // I can't use this depends on map data.
    // for (int i=0; i<M;i++){
    //     int dx = stardust[i].first - sign[0].first;
    //     int dy = stardust[i].second - stardust[0].second;
    //     bool found = true;
    //     for (int j=0;j<N;j++) {
    //         if (!stardust_map[sign[j].first + dx][sign[j].second + dy]) {
    //             found = false;
    //         }
    //     }
    //     if (found) {
    //         cout << dx << " " << dy << endl;
    //         break;
    //     }
    // }

    return 0;
}
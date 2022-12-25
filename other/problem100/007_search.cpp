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

static int T = 5000;
static bool xy[5000][5000];

int main() {
    for (int i=0;i<T;i++) 
        for (int j=0;j<T;j++)
            xy[i][j] = false;

    int N;
    pair<int,int> ps[3000];
    cin>>N;
    for (int i=0;i<N;i++) {
        cin>>ps[i].first;
        cin>>ps[i].second;
        xy[ps[i].first][ps[i].second] = true;
    }

    int ans = 0;
    int a1,a2,b1,b2;
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++) {
            a1 = ps[i].first;
            a2 = ps[i].second;
            b1 = ps[j].first;
            b2 = ps[j].second;

            bool isvalid = true;
            int c1 = +a1;
            int c2 = +a2;
            int d1 = +b1;
            int d2 = +b2;
            for (int tmp : {c1,c2,d1,d2}){
                if (tmp < 0 || tmp >= T) isvalid = false;
            }
            if (isvalid && xy[c1][c2] && xy[d1][d2]) {
                ans = max(ans, int(pow((b1-a1),2) + pow((b2-a2),2)));
            }

            isvalid = true;
            int e1 = +a1;
            int e2 = +a2;
            int f1 = +b1;
            int f2 = +b2;
            for (int tmp : {e1,e2,f1,f2}){
                if (tmp < 0 || tmp >= T) isvalid = false;
            }
            if (isvalid && xy[e1][e2] && xy[f1][f2]) {
                ans = max(ans, int(pow((b1-a1),2) + pow((b2-a2),2)));
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
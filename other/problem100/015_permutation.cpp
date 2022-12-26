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
#define rep(i, l, r) for(int i = l; i < (int)(r); i++)
#define repe(i, l, r) for(int i = l; i <= (int)(r); i++)

int main() {
    int N;
    pair<int,int> ps[100];
    int g[100];

    cin>>N;
    rep(i,0,N) {
        g[i] = i;
        cin>>ps[i].first;
        cin>>ps[i].second;
    }

    long double sum = 0;
    long double count = 0;
    do {
        rep(i,0,N-1) {
            sum += sqrt(pow((ps[g[i]].first - ps[g[i+1]].first), 2) + pow((ps[g[i]].second - ps[g[i+1]].second), 2));
        }
        count++;
    }while(next_permutation(g, g+N));
    
    printf("%.10Lf\n", sum / (count));
    return 0;

}
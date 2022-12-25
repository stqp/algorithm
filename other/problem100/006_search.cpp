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

int main() {

    int N;
    string S;
    cin>>N>>S;
    
    int ans = 0;
    for (int i=0;i<10;i++)
        for (int j=0;j<10;j++)
            for (int k=0;k<10;k++) {
                int ii = -1;
                int ij = -1;
                int ik = -1;
                for (int l=0; l<S.length();l++){
                    int c = S[l] - '0';
                    if (ii==-1 && i==c) ii = l;
                    else if (ii!=-1 && ij==-1 && j==c) ij = l;
                    else if (ii!=-1 && ij!=-1 && ik==-1 && k==c) ik = l;
                }
                if (ii!=-1 && ij!=-1 && ik!=-1) ans++;
            }
    cout << ans << endl;
    return 0;
}
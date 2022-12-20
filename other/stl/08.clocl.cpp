#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {

    int ti = clock();
    for (int i=1; i <=100000000; i++) ;
    printf("Exec time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
}
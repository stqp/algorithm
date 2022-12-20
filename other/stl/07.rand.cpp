#include <iostream>
#include <cmath>
#include <algorithm>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned) time(NULL));

    cout << rand() % 6 + 1 << endl;

    if (rand()%10 <= 8) printf("hello\n");
    else printf("world\n");

}
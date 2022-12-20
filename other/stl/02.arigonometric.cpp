#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double pi = 3.14159265358979323864;
    double x;
    cin>>x;

    printf("%.12lf\n", sin(x/180 * pi));
    printf("%.12lf\n", cos(x/180 * pi));
    printf("%.12lf\n", tan(x/180 * pi));

}
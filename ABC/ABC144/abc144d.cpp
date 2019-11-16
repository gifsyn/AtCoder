
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, x;
    cin >> a >> b >> x;

    double s = x/a;
    double rad;
    if(s >= a*b/2){
        double h = 2*(a*b-s)/a;
        rad = atan2(h, a);
    }else{ // x/a < a*b/2.0
        double w = 2*s/b;
        rad = atan2(b, w);
    }

    double deg = rad/(2*M_PI)*360;
    printf("%.10f\n", deg);


    return 0;
}

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    if(N >= 12){
        N -= 12;
    }
    double L = (double)N;
    double S = (double)M;

    double ans;
    ans = min(abs((30*L+0.5*S)-6*S), 360 - abs((30*L+0.5*S)-6*S));

    printf("%.12lf\n", ans);

    
    return 0;
}
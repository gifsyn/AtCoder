
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int R[N];
    for(int i = 0; i < N; i++){
        cin >> R[i]; 
    }

    sort(R, R+N);

    double ans = 0;
    if(N % 2 == 1){
        for(int i = N-1; i >= 0; i--){
            if(i % 2 == 0){
                ans += R[i] * R[i] * M_PI;
            }else{
                ans -= R[i] * R[i] * M_PI;
            }
        }
    }else{
        for(int i = N-1; i >= 0; i--){
            if(i % 2 == 1){
                ans += R[i] * R[i] * M_PI;
            }else{
                ans -= R[i] * R[i] * M_PI;
            }
        }
    }

    printf("%.12lf\n", ans);


    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    double A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    double ans = 1;
    double sum = 0;
    for(int i = 0; i < N; i++){
        sum += (1.0/A[i]);
    }
    ans /= sum;

    printf("%.12lf\n", ans);
    

    return 0;
}
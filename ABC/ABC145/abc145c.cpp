
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> x(N), y(N);
    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }

    double D = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            D += sqrt(pow(x[i]-x[j],2) + pow(y[i]-y[j],2));
        }
    }

    printf("%.8lf\n", 2*D/N);


    return 0;
}
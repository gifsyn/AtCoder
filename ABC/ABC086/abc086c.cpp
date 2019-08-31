
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int t[N+1], x[N+1], y[N+1];
    t[0] = 0; x[0] = 0; y[0] = 0;
    for(int i = 1; i <= N; i++){
        cin >> t[i] >> x[i] >> y[i];
    }

    bool F = true;
    int D, T;
    for(int i = 1; i <= N; i++){
        D = abs(x[i]-x[i-1]) + abs(y[i]-y[i-1]);
        T = t[i] - t[i-1];
        if(D == T){
            continue;;
        }else if(D > T){
            F = false;
            break;
        }else if((T-D)%2 == 1){
            F = false;
            break;
        }
    }

    if(F == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    int X[N], Y[N];
    for(int i = 0; i < N; i++){
        cin >> X[i];
        Y[i] = X[i];
    }

    sort(Y, Y+N);
    
    for(int i = 0; i < N; i++){
        if(X[i] <= Y[N/2 - 1]){
            cout << Y[N/2] << endl;
        }else{
            cout << Y[N/2-1] << endl;
        }
    }


    return 0;
}
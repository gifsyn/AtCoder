
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    int P = 0;
    for(int i = 0; i <= N; i++){
        if(i == 0){
            P = P + abs(A[i]);
        }else if(i == N){
            P = P + abs(A[i-1]);
        }else{
            P = P + abs(A[i-1] - A[i]);
        }
    }

    for(int i = 0; i < N; i++){
        if(i == 0){
            cout << P - abs(A[i]) - abs(A[i+1] - A[i]) + abs(A[i+1]) << endl;
        }else if(i == N-1){
            cout << P - abs(A[i]) - abs(A[i] - A[i-1]) + abs(A[i-1]) << endl;
        }else{
            cout << P - abs(A[i-1] - A[i]) - abs(A[i] - A[i+1]) + abs(A[i-1] - A[i+1]) << endl;
        }
    }


    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N), B(N), C(N-1);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    for(int i = 0; i < N-1; i++){
        cin >> C[i];
    }

    long long ans = 0;
    for(int i = 0; i < N; i++){
        ans += B[A[i]-1];
        if(i > 0){
            if(A[i-1] + 1 == A[i]){
                ans += C[A[i-1]-1];
            }
        }
    }

    cout << ans << endl;


    return 0;
}
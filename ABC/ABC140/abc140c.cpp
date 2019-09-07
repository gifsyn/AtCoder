
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> B(N-1);
    for(int i = 0; i < N-1; i++){
        cin >> B[i];
    }
    
    vector<long long> A(N);
    A[0] = B[0];
    for(int i = 1; i <= N-2; i++){
        A[i] = min(B[i], B[i-1]);
    }
    A[N-1] = B[N-2];

    long long ans = 0;
    for(int i = 0; i < N; i++){
        ans += A[i];
    }
    cout << ans << endl;


    return 0;
}
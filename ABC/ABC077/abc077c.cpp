
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N), B(N), C(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    for(int i = 0; i < N; i++){
        cin >> C[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    long long ans = 0;
    int a, c;
    int M;
    for(int i = 0; i < N;i ++){
        M = B[i];
        a = lower_bound(A.begin(), A.end(), M) - A.begin();
        c = C.end() - upper_bound(C.begin(), C.end(), M);
        ans += (long long)a*c;
    }
    cout << ans << endl;
    
    
    return 0;
}
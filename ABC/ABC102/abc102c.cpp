
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long> A(N);
    vector<long long> B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
        B[i] = A[i] - (i + 1);
    }

    sort(B.begin(), B.end());

    int m = B[N/2];

    long long ans = 0;
    for(int i = 0; i < N; i++){
        ans += abs(B[i] - m);
    }
    cout << ans << endl;


    return 0;
}
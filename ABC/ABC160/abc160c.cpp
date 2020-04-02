#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int K, N;
    cin >> K >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int b = K-A[N-1]+A[0];
    for(int i=0; i+1<N; i++){
        b = max(b, A[i+1]-A[i]);
    }
    
    cout << K-b << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, K, M;
    cin >> N >> K >> M;

    int sum = 0;
    vector<int> A(N-1);
    for(int i=0; i<N-1; i++){
        cin >> A[i];
        sum += A[i];
    }

    int ans = N*M-sum;
    if(ans < 0){
        cout << 0 << endl;
    }else if(ans <= K){
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}
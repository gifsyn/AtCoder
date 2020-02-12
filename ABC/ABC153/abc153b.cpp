#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int H, N;
    cin >> H >> N;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    ll sum_A = 0;
    for(int i=0; i<N; i++){
        sum_A += A[i];
    }

    if(sum_A >= H){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}
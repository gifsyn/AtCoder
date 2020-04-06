#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int sumV = 0;
    for(int i=0; i<N; i++){
        sumV += A[i];
    }

    int cntPP = 0;
    for(int i=0; i<N; i++){
        if(!(A[i]*4*M < sumV)){
            cntPP++;
        }
        if(cntPP >= M){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;


    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    long long N, K, Q;
    cin >> N >> K >> Q;
    vector<long long> A(Q);
    for(long long i = 0; i < Q; i++){
        cin >> A[i];
    }

    vector<long long> cnt(N, 0);
    for(long long i = 0; i < Q; i++){
        cnt[A[i]-1]++;
    }

    
    for(long long i = 0; i < N; i++){
        if(K - (Q - cnt[i]) <= 0){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
    

    return 0;
}
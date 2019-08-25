
#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9+7;

int main(){
    long long N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    unsigned long long ans = 0;

    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            if(A[i] > A[j]){
                ans++;
            }
        }
    }
    // cout << ans << endl;

    vector<int> A_2;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < N; j++){
            A_2.push_back(A[j]);
        }
    }
    long long I = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < 2*N; j++){
            if(A_2[i] > A_2[j]){
                I++;
            }
        }
    }
    long long J = I - ans;
    // cout << "I " << I << endl;
    // cout << "J " << J << endl;

    ans += (((K-1)%MOD)*((I-J)%MOD))%MOD;
    ans %= MOD;
    ans += (((J*((((K-1)%MOD)*(K%MOD))%MOD))%MOD)/2) % MOD;
    ans %= MOD;

    cout << ans << endl;
    
 

    return 0;
}

#include <iostream>

using namespace std;

int N, K;
const int max_N = 2000;
const int max_K = 2000;
long long C[max_N+1][max_N+1];
long long res[max_K+1];

long long mod = 1000000007;


int main(){
    cin >> N >> K;

    // C[i][j] := i_C_j
    for(int i = 0; i <= N; i++){
        C[i][0] = 1;
        C[i][i] = 1;
        for(int j = 1; j < i; j++){
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % mod;
        }
    }

    for(int i = 1; i <= K; i++){
        if(N-K+1 >= i){
            res[i] = (C[N-K+1][i] * C[K-1][i-1]) % mod;
        }else{
            res[i] = 0;
        }
    }

    for(int i = 1; i <= K; i++){
        cout << res[i] << endl;
    }


    return 0;
}
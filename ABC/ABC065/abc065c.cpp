
#include <iostream>

using namespace std;

const long long MOD = 1e9+7;

long long f(long long k){
    long long res = 1;
    for(long long i = 1; i <= k; i++){
        res *= (i % MOD);
        res %= MOD;
    }

    return res;
}

int main(){
    long long N, M;
    cin >> N >> M;

    if(N > M){
        swap(N, M);
    }

    long long ans = 0;
    if(N+1 < M){
        ans = 0;
    }else if(N+1 == M){
        ans = (f(N) * f(M)) % MOD;
    }else if(N == M){
        ans = (2 * f(N) * f(M)) % MOD;
    }
    
    cout << ans << endl;


    return 0;
}
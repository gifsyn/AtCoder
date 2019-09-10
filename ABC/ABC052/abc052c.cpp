
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
const long long MOD = 1e9+7;


bool isPrime(long long n){
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}


int main(){
    long long N;
    cin >> N;
    vector<long long> cnt_p;
    long long v;
    long long n;
    for(long long i = 2; i <= N; i++){
        if(isPrime(i)){
            v = 0;
            for(long long j = 2; j <= N; j++){
                n = j;
                while(n % i == 0){
                    n /= i;
                    v++;
                }
            }
            cnt_p.push_back(v);
        }
    }

    
    long long ans = 1;
    for(auto p : cnt_p){
        ans *= (p+1)%MOD;
        ans %= MOD;
    }

    cout << ans << endl;


    return 0;
}
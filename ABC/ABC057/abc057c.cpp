
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long N;
    cin >> N;

    long long ans = 11;
    for(long long i = 1; i < sqrt(N)+1; i++){
        if(N % i == 0){
            // cout << "i : " << i << " N/i : " << N/i << endl;
            // cout << (long long)log10(i)+1LL << " " <<  (long long)log10(N/i)+1LL << endl;
            ans = min(ans, max((long long)log10(i)+1LL, (long long)log10(N/i)+1LL));
        }
    }

    cout << ans << endl;


    return 0;
}
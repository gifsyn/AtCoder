
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = n-1LL;
    for(long long i = 1LL; i <= (long long)sqrt(n)+1LL; i++){
        if(n % i == 0){
            ans = min(ans, (i-1LL)+(n/i-1LL));
        }
    }

    cout << ans << endl;
    

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n) {
    if(n <= 1){
        return false;
    }
    for(long long i=2LL; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long x;
    cin >> x;
    long long i = x;
    while(true){
        if(is_prime(i)){
            cout << i << endl;
            break;
        }
        i++;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    long long r;
    while(a % b){
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}

long long lcm(long long a, long long b){
    return a*b/gcd(a, b);
}

int main(){
    long long A, B;
    cin >> A >> B;
    cout << lcm(A, B) << endl;

    return 0;
}
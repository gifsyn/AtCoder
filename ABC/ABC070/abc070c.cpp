
#include <iostream>

using namespace std;


unsigned long long gcd(unsigned long long a, unsigned long long b){
    if(b == 0){
        return a;
    }else{
        return gcd(b, a%b);
    }
}


unsigned long long lcm(unsigned long long a, unsigned long long b){
    unsigned long long g = gcd(a, b);

    return a/g*b;
}

int main(){
    int N;
    cin >> N;
    unsigned long long T[N];
    for(int i = 0; i < N; i++){
        cin >> T[i];
    }

    unsigned long long ans = 1uLL;
    for(int i = 0; i < N; i++){
        ans = lcm(ans, T[i]);
    }

    cout << ans << endl;

    return 0;
}
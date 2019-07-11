
#include <cstdio>

long long gcd(long long, long long);
long long lcm(long long, long long);

int main(){
    long long A, B ,C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    long long ans;
    ans = (B - A + 1) - ( B/C + B/D - B/lcm(C, D) - ( (A-1)/C + (A-1)/D - (A-1)/lcm(C, D) ) );

    printf("%lld\n", ans);
}

long long gcd(long long p, long long q){
    long long r;
    while(q > 0){
        r = p % q;
        p = q;
        q = r;
    }

    return p;
}

long long lcm(long long m, long long n){
    long long p = m,q = n,r;
    while(q > 0){
        r = p % q;
        p = q;
        q = r;
    }

    return (m * n) / p; 
}

#include <cstdio>

int main(){
    unsigned long long int k, a, b;
    scanf("%lld %lld %lld", &k, &a, &b);

    unsigned long long int n = 1;

    if(k == 1){
        n++;
    }else if(a >= b){
        n += k;
    }else if(a > k - 1){
        n += k;
    }else if(b - a <= 2){
        n += k;
    }else{
        unsigned long long x = (k - (a - 1)) / 2;
        unsigned long long y = k - 2 * x;
        n = (b - a) * x + y + 1;
    }
    
    printf("%lld\n",n);

    return 0;
}

#include <cstdio>
#include <cmath>

int main(){
    int n;
    scanf("%d",&n);
    unsigned long long p = 1;
    for(int i = 1; i <= n; i++){
        p = (p * i) % (int)(pow(10,9) + 7);
    }
    printf("%lld\n",p);

    return 0;
}
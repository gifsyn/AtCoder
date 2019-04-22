
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    unsigned long long l[n + 1];
    l[0] = 2;
    l[1] = 1;
    for(int i = 2; i <= n; i++){
        l[i] = l[i - 1] + l[i - 2];
    }
    printf("%lld\n",l[n]);

    return 0;
}
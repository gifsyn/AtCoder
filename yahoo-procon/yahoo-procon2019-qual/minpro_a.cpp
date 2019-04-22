
#include <cstdio>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    if(n % 2 == 1){
        if(n / 2 + 1 >= k){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }else{
        if(n / 2 >= k){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}
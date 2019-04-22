
#include <cstdio>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = 0;
    if(a > b){
        ans = 2 * a - 1;
    }else if(a == b){
        ans = 2 * a;
    }else{
        ans = 2 * b - 1;
    }
    printf("%d\n", ans);

    return 0;
}
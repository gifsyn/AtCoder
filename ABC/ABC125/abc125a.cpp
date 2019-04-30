
#include <cstdio>

int main(){
    int a, b, t;
    scanf("%d %d %d", &a, &b, &t);
    int ans = 0;
    for(int i = a; i <= t; i += a){
        ans += b;
    }
    printf("%d\n", ans);

    return 0;
}

#include <cstdio>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int ans;
    if(a >= 13){
        ans = b;
    }else if(6 <= a && a <= 12){
        ans = b / 2;
    }else{
        ans = 0;
    }

    printf("%d\n", ans);

    return 0;
}
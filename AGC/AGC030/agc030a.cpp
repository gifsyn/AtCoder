
#include <cstdio>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans;
    if(a + b < c){
        ans = a + b + b + 1;
    }else if(a + b == c){
        ans = a + b + b;
    }else{
        ans = b + c;
    }
    printf("%d\n", ans);

    return 0;
}
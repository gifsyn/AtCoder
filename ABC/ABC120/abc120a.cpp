
#include <cstdio>

int main(){
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    int ans;
    if(a * c <= b){
        ans = c;
    }else{
        ans = b / a;
    }
    printf("%d\n", ans);

    return 0;
}
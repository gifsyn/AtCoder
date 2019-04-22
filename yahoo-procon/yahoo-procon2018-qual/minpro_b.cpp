
#include <cstdio>

int main(){
    int x, k;
    scanf("%d %d", &x, &k);

    int d = 1;
    for(int i = 0; i < k; i++){
        d *= 10;
    }

    int ans;
    if(x % d == 0){
        ans = x + d;
    }else{
        ans = x / d * d + d;
    }

    printf("%d\n",ans);

    return 0;
}
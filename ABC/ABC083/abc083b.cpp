
#include <cstdio>

int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    int c;
    int d;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        c = i;
        d = 0;
        while(c != 0){
            d += c % 10;
            c = (c - c % 10) / 10;
        }
        if(a <= d && d <= b){
            ans += i;
        }
    }
    printf("%d\n",ans);

    return 0;
}
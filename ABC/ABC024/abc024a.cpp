
#include <cstdio>

int main(){
    int a,b,c,k,s,t;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&k,&s,&t);
    int ans = a * s + b * t;
    if(s + t >= k){
        ans -= (s + t) * c;
    }
    printf("%d\n",ans);

    return 0;
}
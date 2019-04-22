
#include <cstdio>
#include <cstdlib>

int main(){
    int a,b;
    int ans;
    scanf("%d",&a);
    scanf("%d",&b);
    if(abs(a-b) <= 5){
        ans = abs(a-b);
    }else{
        ans = 10 - abs(a-b);
    }
    printf("%d\n",ans);

    return 0;
}
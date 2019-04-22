
#include <cstdio>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int ans;
    if((a + b) % 2 == 0){
        ans = (a + b) / 2;
    }else{
        ans = (a + b) / 2 + 1;
    }
    printf("%d\n",ans);

    return 0;
}

#include <cstdio>

int main(){
    int a,d;
    scanf("%d %d",&a,&d);
    if(a > d){
        printf("%d\n",a * (d + 1));
    }else{
        printf("%d\n",(a + 1) * d);
    }

    return 0;
}
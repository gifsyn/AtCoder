
#include <cstdio>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((double)b / a > (double)d / c){
        printf("TAKAHASHI\n");
    }else if((double)b / a < (double)d / c){
        printf("AOKI\n");
    }else{
        printf("DRAW\n");
    }

    return 0;
}
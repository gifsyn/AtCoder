
#include <cstdio>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((a - c) * (a - c) <= d * d){
        printf("Yes");
    }else if((a - b) * (a - b) <= d * d && (b - c) * (b - c) <= d * d){
        printf("Yes");
    }else{
        printf("No");
    }
    printf("\n");

    return 0;
}
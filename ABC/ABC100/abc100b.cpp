
#include <cstdio>

int main(){
    int D,N;
    scanf("%d%d",&D,&N);
    if(D == 0){
        if(N < 100){
            printf("%d",N);
        }else{
            printf("%d",N + 1);
        }
    }else if(D == 1){
        if(N < 100){
            printf("%d",100 * N);
        }else{
            printf("%d",100 * N + 100);
        }
    }else if(D == 2){
        if(N < 100){
            printf("%d",100 * 100 * N);
        }else{
            printf("%d",10000 * N + 10000);
        }
    }
    printf("\n");

    return 0;
}
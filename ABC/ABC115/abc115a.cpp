
#include <cstdio>

int main(){
    int d;
    scanf("%d",&d);
    d = 25 - d;
    
    printf("Christmas");
    for(int i = 0; i < d; i++){
        printf(" Eve");
    }
    printf("\n");

    return 0;
}

#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    if(n % 2 == 0){
        printf("%d",n);
    }else{
        printf("%d",2 * n);
    }
    printf("\n");

    return 0;
}
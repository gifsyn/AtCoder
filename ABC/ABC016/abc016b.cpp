
#include <cstdio>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a + b == c && a - b != c){
        printf("+");
    }else if(a + b != c && a - b == c){
        printf("-");
    }else if(a + b == c && a - b == c){
        printf("?");
    }else{
        printf("!");
    }
    printf("\n");

    return 0;
}
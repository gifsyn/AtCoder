
#include <cstdio>

int main(){
    int A,B;
    char op;
    scanf("%d %c %d",&A,&op,&B);
    if(op == '+'){
        printf("%d",A + B);
    }
    else{
        printf("%d",A - B);
    }
    printf("\n");

    return 0;
}
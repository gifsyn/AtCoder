
#include <cstdio>

int main(){
    char a,b;
    scanf("%c %c",&a,&b);
    int A,B;
    if(a == 'H'){
        A = 1;
    }else{
        A = -1;
    }
    if(b == 'H'){
        B = 1;
    }else{
        B = -1;
    }
    if(A * B == 1){
        printf("H\n");
    }else{
        printf("D\n");
    }

    return 0;
}

#include <cstdio>

int main(){
    char n[5];
    scanf("%s",n);
    if(n[0] == n[1] && n[1] == n[2] && n[2] == n[3]){
        printf("SAME\n");
    }else{
        printf("DIFFERENT\n");
    }

    return 0;
}
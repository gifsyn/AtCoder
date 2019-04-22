
#include <cstdio>

int main(){
    char s[100001];
    scanf("%s",s);
    for(int i = 0; s[i] != '\0'; i++){
        if(i % 2 == 0){
            printf("%c",s[i]);
        }
    }
    printf("\n");

    return 0;
}
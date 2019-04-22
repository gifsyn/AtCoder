
#include <cstdio>

int main(){
    char s[3][11];
    scanf("%s %s %s",s[0],s[1],s[2]);
    for(int i = 0; i < 3; i++){
        s[i][0] = 'A' + (s[i][0] - 'a');
        printf("%c",s[i][0]);
    }
    printf("\n");

    return 0;
}
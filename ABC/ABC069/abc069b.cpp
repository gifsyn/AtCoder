
#include <cstdio>

int main(){
    char s[101];
    scanf("%s",s);
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        count++;
    }
    printf("%c%d%c\n",s[0],count - 2,s[count - 1]);

    return 0;
}
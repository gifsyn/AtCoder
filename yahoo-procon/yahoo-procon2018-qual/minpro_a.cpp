
#include <cstdio>

int main(){
    char s[5];
    scanf("%s",s);
    if(s[0] == 'y' && s[1] == 'a' && s[2] == 'h' && s[3] == s[4]){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
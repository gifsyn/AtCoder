
#include <cstdio>

int main(){
    char s[51];
    scanf("%s",s);

    for(int i = 0;; i++){
        if(s[i] == '\0'){
            if(s[i - 1] == 'T'){
                printf("YES\n");
                break;
            }else{
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
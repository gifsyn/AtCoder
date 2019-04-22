
#include <cstdio>

int main(){
    char s[11];
    scanf("%s",s);
    int l = 0;
    for(int i = 0; i < 11; i++){
        if('a' <= s[i] && s[i] <= 'z'){
            l++;
        }else{
            break;
        }
    }
    if(l == 1){
        if(s[0] == 'a'){
            printf("-1");
        }else{
            printf("%c",s[0] - 1);
        }
    }else{
        if(s[l - 1] == 'a'){
            for(int i = 0; i < l - 1; i++){
                printf("%c",s[i]);
            }
        }else{
            s[l - 1]--;
            for(int i = 0; i < l; i++){
                printf("%c",s[i]);
            }
        }
    }
    printf("\n");
    

    return 0;
}
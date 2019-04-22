
#include <cstdio>

int main(){
    char s[27];
    scanf("%s",s);
    bool check[26];
    for(int i = 0; i < 26; i++){
        check[i] = true;
    }
    for(int i = 0; s[i] != '\0'; i++){
        if(check[s[i] - 97]){
            check[s[i] - 97] = false;
        }else{
            printf("no\n");

            return 0;
        }
    }
    printf("yes\n");

    return 0;
}
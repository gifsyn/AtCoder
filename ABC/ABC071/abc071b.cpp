
#include <cstdio>

int main(){
    char s[100001];
    scanf("%s",s);
    bool a[26];
    for(int i = 0; i < 26; i++){
        a[i] = true;
    }
    for(int i = 0; s[i] != '\0'; i++){
        if(a[s[i] - 97]){
            a[s[i] - 97] = false;
        }
    }
    for(int i = 0; i < 26; i++){
        if(a[i]){
            printf("%c\n",'a' + i);
            break;
        }
        if(i == 25){
            printf("None\n");
        }
    }

    return 0;
}
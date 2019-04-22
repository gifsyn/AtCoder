
#include <cstdio>

int main(){
    char s[201];
    scanf("%s",s);
    int countls = 0;
    for(int i = 0; s[i] != '\0'; i++){
        countls++;
    }
    for(int i = countls - 1; i >= 2; i--){
        if(i % 2 != 0){
            continue;
        }else{
            for(int j = 0; j < i / 2; j++){
                if(s[j] != s[j + i / 2]){
                    break;
                }
                if(j == i / 2 - 1){
                    printf("%d\n",i);

                    return 0;
                }
            }
        }
    }

    return 0;
}
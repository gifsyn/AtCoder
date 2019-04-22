
#include <cstdio>

int main(){
    char s[11];
    scanf("%s",s);
    int countls = 0;
    for(int i = 0; i < 11; i++){
        if('A' <= s[i] && s[i] <= 'z'){
            countls++;
        }
    }
    bool checks[countls];
    for(int i = 0; i < countls; i++){
        checks[i] = true;
        if(i == 0){
            checks[i] = false;
        }
    }
    int countC = 0;
    for(int i = 2; i < countls - 1; i++){
        if(s[i] == 'C'){
            countC++;
            checks[i] = false;
        }
    }

    if(s[0] == 'A' && countC == 1){
        for(int i = 1; i < countls; i++){
            if(checks[i]){
                if('a' <= s[i] && s[i] <= 'z'){
                    continue;
                }else{
                    printf("WA\n");
                    
                    return 0;
                }
            }
        }
        printf("AC\n");
    }else{
        printf("WA\n");
    }

    return 0;
}
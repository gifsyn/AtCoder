
#include <cstdio>

int main(){
    char s[3][11];
    for(int i = 0; i < 3; i++){
        scanf(" %s",&s[i]);
    }

    int count[3];
    for(int i = 0; i < 3; i++){
        count[i] = 0;
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0;; j++){
            if(s[i][j] == '\0'){
                count[i] = j;
                break;
            }
        }
    }

    if(s[0][count[0] - 1] == s[1][0] && s[1][count[1] - 1] == s[2][0]){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
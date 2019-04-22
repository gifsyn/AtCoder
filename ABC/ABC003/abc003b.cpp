
#include <cstdio>

int main(){
    char S[11],T[11];
    scanf("%s",S);
    scanf("%s",T);

    bool check = true;
    for(int i = 0; S[i] != '\0'; i++){
        if(S[i] != '@' && T[i] != '@' && S[i] != T[i]){
            check = false;
            break;
        }
        if(S[i] == '@' && T[i] != '@' && T[i] != 'a' && T[i] != 't' && T[i] != 'c' && T[i] != 'o' && T[i] != 'd' && T[i] != 'e' && T[i] != 'r'){
            check = false;
            break;
        }
        if(T[i] == '@' && S[i] != '@' && S[i] != 'a' && S[i] != 't' && S[i] != 'c' && S[i] != 'o' && S[i] != 'd' && S[i] != 'e' && S[i] != 'r'){
            check = false;
            break;
        }
    }
    if(check){
        printf("You can win");
    }else{
        printf("You will lose");
    }
    printf("\n");

    return 0;
}
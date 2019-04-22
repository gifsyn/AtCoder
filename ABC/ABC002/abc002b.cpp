
#include <cstdio>

int main(){
    char W[31];
    scanf("%s",W);
    for(int i = 0; i < 31; i++){
        if(97 <= W[i] && W[i] <= 122){
            if(W[i] != 'a' && W[i] != 'i' && W[i] != 'u' && W[i] != 'e' && W[i] != 'o'){
                printf("%c",W[i]);
            }
        }else{
            break;
        }
    }
    printf("\n");

    return 0;
}
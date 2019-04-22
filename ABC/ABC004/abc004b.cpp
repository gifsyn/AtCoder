
#include <cstdio>

int main(){
    char C[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf(" %c[^\n]",&C[i][j]);
        }
    }

    char S[4][4];
    for(int i = 0; i < 4 ; i++){
        for(int j = 0; j < 4; j++){
            S[i][j] = C[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 ; j++){
            C[i][j] = S[3 - i][3 - j];
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%c",C[i][j]);
            if(j < 3){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }

    return 0;
}
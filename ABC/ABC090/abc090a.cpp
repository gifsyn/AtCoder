
#include <cstdio>

int main(){
    char c[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("\n%c",&c[i][j]);
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
                printf("%c",c[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
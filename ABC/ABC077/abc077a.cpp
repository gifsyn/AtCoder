
#include <cstdio>

int main(){
    char c[2][3];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("\n%c",&c[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        int j = 2 - i;
        if(c[0][i] != c[1][j]){
        printf("NO\n");

        return 0;
        }
    }
    printf("YES\n");

    return 0;
}
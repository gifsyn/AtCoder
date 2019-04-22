
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    char s[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("\n%c",&s[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = n - 1; j >= 0; j--){
            printf("%c",s[j][i]);
        }
        printf("\n");
    }

    return 0;
}
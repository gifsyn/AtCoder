
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i <= n / 7; i++){
        for(int j = 0; j <= n / 4; j++){
            if(7 * i + 4 * j == n){
                printf("Yes\n");

                return 0;
            }
        }
    }

    printf("No\n");

    return 0;
}
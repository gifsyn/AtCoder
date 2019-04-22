
#include <cstdio>

int main(){
    int a[7] = {1,3,5,7,8,10,12};
    int b[4] = {4,6,9,11};
    int c[1] = {2};
    int x,y;
    scanf("%d %d",&x,&y);
    for(int i = 0; i < 7; i++){
        if(a[i] == x){
            for(int j = i + 1; j < 7; j++){
                if(a[j] == y){
                    printf("Yes\n");

                    return 0;
                }
            }
            printf("No\n");

            return 0;
        }
    }
    
    for(int i = 0; i < 4; i++){
        if(b[i] == x){
            for(int j = i + 1; j < 4; j++){
                if(b[j] == y){
                    printf("Yes\n");

                    return 0;
                }
            }
            printf("No\n");

            return 0;
        }
    }

    printf("No\n");

    return 0;
}
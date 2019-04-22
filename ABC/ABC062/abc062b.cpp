
#include <cstdio>

int main(){
    int h,w;
    scanf("%d %d",&h,&w);
    char a[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            scanf("\n%c",&a[i][j]);
        }
    }

    for(int i = 0; i < h + 2; i++){
        for(int j = 0; j < w + 2; j++){
            if(i == 0 || i == h + 1 || j == 0 || j == w + 1){
                printf("#");
            }else{
                printf("%c",a[i - 1][j - 1]);
            }
            if(j == w + 1){
                printf("\n");
            }
        }
    }

    return 0;
}

#include <cstdio>

int main(){
    int H,W;
    scanf("%d %d",&H,&W);
    int a[H][W];
    bool b[H][W];
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            scanf("%d",&a[i][j]);
            b[i][j] = true;
        }
    }

    int count = 0;
    int v;
    int ope[H * W][4];
    while(true){
        v = count;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(a[i][j] % 2 == 1){
                    if(i - 1 >= 0 && b[i - 1][j] == true && a[i - 1][j] % 2 == 1){
                        b[i][j] = false;
                        a[i][j]--;
                        a[i - 1][j]++;
                        ope[count][0] = i;
                        ope[count][1] = j;
                        ope[count][2] = i - 1;
                        ope[count][3] = j;
                        count++;
                    }else if(j + 1 < W && b[i][j + 1] == true && a[i][j + 1] % 2 == 1){
                        b[i][j] = false;
                        a[i][j]--;
                        a[i][j + 1]++;
                        ope[count][0] = i;
                        ope[count][1] = j;
                        ope[count][2] = i;
                        ope[count][3] = j + 1;
                        count++;
                    }else if(i + 1 < H && b[i + 1][j] == true && a[i + 1][j] % 2 == 1){
                        b[i + 1][j] = false;
                        a[i][j]--;
                        a[i + 1][j]++;
                        ope[count][0] = i;
                        ope[count][1] = j;
                        ope[count][2] = i + 1;
                        ope[count][3] = j;
                        count++;
                    }else if(j - 1 >= 0 && b[i][j - 1] == true && a[i][j - 1] % 2 == 1){
                        b[i][j - 1] = false;
                        a[i][j]--;
                        a[i][j - 1]++;
                        ope[count][0] = i;
                        ope[count][1] = j;
                        ope[count][2] = i;
                        ope[count][3] = j - 1;
                        count++;
                    }
                }
            }
        }
        if(count == v){
            break;
        }
    }

    printf("%d\n",count);
    for(int i = 0; i < count; i++){
        printf("%d %d %d %d\n",ope[i][0] + 1, ope[i][1] + 1, ope[i][2] + 1, ope[i][3] + 1);
    }

    return 0;
}
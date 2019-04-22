
#include <cstdio>

int main(){
    int a[3], b[3];
    for(int i = 0; i < 3; i++){
        scanf("%d %d", &a[i], &b[i]);
    }

    int c[4];
    for(int i = 0; i < 4; i++){
        c[i] = 0;
    }
    for(int i = 0; i < 3; i++){
        c[a[i] - 1]++;
        c[b[i] - 1]++;
    }

    int count_1 = 0, count_2 = 0;
    for(int i = 0; i < 4; i++){
        if (c[i] == 1){
            count_1++;
        }else if(c[i] == 2){
            count_2++;        }
    }

    if(count_1 == 2 && count_2 == 2){
        printf("YES\n");
    }else{
        printf("NO\n");
    }    

    return 0;
}
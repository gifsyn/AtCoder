
#include <cstdio>

int main(){
    char o[51],e[51];
    scanf("%s\n%s",o,e);

    int count_o = 0;
    int count_e = 0;
    int count_d;
    for(int i = 0; o[i] != '\0'; i++){
        count_o++;
    }
    for(int i = 0; e[i] != '\0'; i++){
        count_e++;
    }
    count_d = count_o + count_e;

    if(count_d % 2 == 0){
        for(int i = 0; i < count_o; i++){
            printf("%c%c",o[i],e[i]);
        }
    }else{
        for(int i = 0; i < count_e; i++){
                printf("%c%c",o[i],e[i]);
        }
        printf("%c",o[count_o - 1]);
    }
    printf("\n");

    return 0;
}
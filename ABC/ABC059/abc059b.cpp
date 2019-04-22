
#include <cstdio>

int main(){
    char a[101],b[101];
    scanf("%s\n%s",a,b);

    int count_d_a = 0;
    int count_d_b = 0;
    for(int i = 0; a[i] != '\0'; i++){
        count_d_a++;
    }
    for(int i = 0; b[i] != '\0'; i++){
        count_d_b++;
    }

    if(count_d_a > count_d_b){
        printf("GREATER\n");
    }else if(count_d_a < count_d_b){
        printf("LESS\n");
    }else{
        for(int i = 0; i < count_d_a; i++){
            if(a[i] > b[i]){
                printf("GREATER\n");

                return 0;
            }else if(a[i] < b[i]){
                printf("LESS\n");

                return 0;
            }
        }
        printf("EQUAL\n");
    }

    return 0;
}
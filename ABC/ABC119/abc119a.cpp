
#include <cstdio>
#include <cstring>

int main(){
    char d[11];
    scanf("%s", d);
    char h[] = "2019/04/30";

    if(strcmp(d, h) <= 0){
        printf("Heisei\n");
    }else{
        printf("TBD\n");
    }

    return 0;
}
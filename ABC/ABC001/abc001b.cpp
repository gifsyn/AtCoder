
#include <cstdio>

int main(){
    int m;
    scanf("%d",&m);
    double x = (double) m / 1000;
    if(x < 0.1){
        printf("%02d",0);
    }else if(0.1 <= x && x <= 5){
        printf("%02d",(int)(x * 10));
    }else if(6 <= x && x <= 30){
        printf("%02d",(int)x + 50);
    }else if(35 <= x && x <= 70){
        printf("%0d",((int)x - 30) / 5 + 80);
    }else if(70 < x){
        printf("%d",89);
    }
    printf("\n");

    return 0;
}
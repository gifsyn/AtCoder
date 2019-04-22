
#include <cstdio>

int main(){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(a >= b){
        printf("delicious\n");
    }else if(b - a <= x){
        printf("safe\n");
    }else{
        printf("dangerous\n");
    }

    return 0;
}
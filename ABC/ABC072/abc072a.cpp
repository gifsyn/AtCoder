
#include <cstdio>

int main(){
    int x,t;
    scanf("%d %d",&x,&t);
    if(x > t){
        printf("%d\n",x - t);
    }else{
        printf("0\n");
    }

    return 0;
}
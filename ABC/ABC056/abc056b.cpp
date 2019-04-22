
#include <cstdio>
#include <cstdlib>

int main(){
    int w,a,b;
    scanf("%d %d %d",&w,&a,&b);
    if(abs(a - b) > w){
        printf("%d\n",abs(a - b) - w);
    }else if(abs(a - b) <= w){
        printf("0\n");
    }

    return 0;
}
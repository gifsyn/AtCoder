
#include <cstdio>

int main(){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    printf("%d\n",x - a - ((x - a) / b) * b);

    return 0;
}
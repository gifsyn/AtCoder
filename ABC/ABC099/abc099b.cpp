
#include <cstdio>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int Hb = ((b - a) + 1) * (b - a) / 2;
    printf("%d\n",Hb - b);

    return 0;
}
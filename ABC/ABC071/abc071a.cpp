
#include <cstdio>
#include <cstdlib>

int main(){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    int da = abs(x - a);
    int db = abs(x - b);
    if(da < db){
        printf("A\n");
    }else if(da > db){
        printf("B\n");
    }

    return 0;
}
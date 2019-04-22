
#include <cstdio>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a + b >= 24){
        printf("%d\n",a + b - 24);
    }else{
        printf("%d\n",a + b);
    }

    return 0;
}
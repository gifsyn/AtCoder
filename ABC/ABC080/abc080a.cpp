
#include <cstdio>

int main(){
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
    if(a * n <= b){
        printf("%d\n",a * n);
    }else{
        printf("%d\n",b);
    }

    return 0;
}
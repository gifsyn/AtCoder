
#include <cstdio>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    if(a % 2 == 1 && b % 2 == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
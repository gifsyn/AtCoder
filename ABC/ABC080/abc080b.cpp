
#include <cstdio>

int main(){
    int x;
    scanf("%d",&x);
    int a = x;
    int b = 0;
    while(a != 0){
        b = b + a % 10;
        a = (a - a % 10) / 10;
    }
    if(x % b == 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
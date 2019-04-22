
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a = n % 10 * 100 + n / 10 % 10 * 10 + n / 100;
    if(n == a){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
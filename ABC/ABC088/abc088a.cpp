
#include <cstdio>

int main(){
    int n,a;
    scanf("%d %d",&n,&a);
    if(n - (n / 500) * 500 <= a){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
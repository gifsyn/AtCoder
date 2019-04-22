
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    printf("%02d:%02d:%02d\n",n / 60 / 60,n / 60 % 60,n % 60);

    return 0;
}

#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int d[4];
    d[0] = n / 1000;
    d[1] = n % 1000 / 100;
    d[2] = n % 100 / 10;
    d[3] = n % 10;
    if((d[0] == d[1] && d[1] == d[2]) || (d[1] == d[2] && d[2] == d[3])){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
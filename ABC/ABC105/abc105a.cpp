
#include <cstdio>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int min = n / k;
    int max;
    if(n % k >= 1){
        max = min + 1;
    }else{
        max = min;
    }
    printf("%d\n",max - min);

    return 0;
}
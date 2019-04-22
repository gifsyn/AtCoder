
#include <cstdio>

int main(){
    int a,b,k;
    scanf("%d %d %d",&a,&b,&k);
    if(b - a >= k * 2){
        for(int i = a; i <= a + k - 1; i++){
            printf("%d\n",i);
        }
        for(int i = b - k + 1; i <= b; i++){
            printf("%d\n",i);
        }
    }else{
        for(int i = a; i <= b; i++){
            printf("%d\n",i);
        }
    }

    return 0;
}
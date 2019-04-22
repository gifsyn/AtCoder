
#include <cstdio>

int main(){
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);
    for(int i = n;; i++){
        if(i % a == 0 && i % b == 0){
            printf("%d\n",i);
            break;
        }
    }

    return 0;
}
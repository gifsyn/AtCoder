
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;; i++){
        if(i * i > n){
            printf("%d\n",(i - 1) * (i - 1));
            break;
        }
    }

    return 0;
}
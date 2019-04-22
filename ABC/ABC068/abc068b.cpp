
#include <cstdio>
#include <cmath>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1;; i++){
        if(pow(2,i) > n){
            printf("%d\n",(int)pow(2,i - 1));
            break;
        }
    }

    return 0;
}
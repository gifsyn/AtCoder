
#include <cstdio>
#include <cmath>

int main(){
    int x;
    scanf("%d",&x);
    if(x < 4){
        printf("1\n");

        return 0;
    }
    int max = 0;
    for(int i = 2; i <= sqrt(x); i++){
        for(int j = 1;; j++){
            if(pow(i,j) <= x && x <= pow(i,j + 1)){
                if(max < pow(i,j)){
                    max = pow(i,j);
                }
            }
            if(pow(i,j) > x){
                break;
            }
        }
    }
    printf("%d\n",max);

    return 0;
}

#include <cstdio>
#include <cmath>

int main(){
    int n;
    scanf("%d",&n);
    int d[4];
    for(int i = 0; i < 4; i++){
        d[i] = pow(2,i);
    }

    int m = n;
    int count = 0;
    for(int i = 0; i < 4; i++){
        if(m % 2 == 1){
            count++;
            m = m / 2;
        }else{
            m = m / 2;
        }
    }
    printf("%d\n",count);


    for(int i = 0; i < 4; i++){
        if(n == 1){
            printf("%d\n",d[i]);
            break;
        }
        if(n % 2 == 1){
            printf("%d\n",d[i]);
            n = n / 2;
        }else{
            n = n / 2;
        }
    }

    return 0;
}
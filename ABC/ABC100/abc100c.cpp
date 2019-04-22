
#include <cstdio>

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&a[i]);
    }

    int count2 = 0;
    for(int i = 0; i < N; i++){
        for(int j = 1;; j++){
            if(a[i] % 2 == 0){
                a[i] = a[i] / 2;
                count2++;
            }else{
                break;
            }
        }
    }

    printf("%d\n",count2);

    return 0;
}
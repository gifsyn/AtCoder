
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int p[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&p[i]);
    }
    int mi = 0;
    for(int i = 0; i < n; i++){
        if(p[i] > p[mi]){
            mi = i;
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i == mi){
            sum += p[i] / 2;
        }else{
            sum += p[i];
        }
    }
    printf("%d\n",sum);

    return 0;
}

#include <cstdio>

int main(){
    int N,K,X,Y;
    scanf("%d %d %d %d",&N,&K,&X,&Y);
    int M = 0;
    for(int i = 1; i <= N; i++){
        if(i <= K){
            M += X;
        }
        if(i > K){
            M += Y;
        }
    }
    printf("%d\n",M);

    return 0;
}
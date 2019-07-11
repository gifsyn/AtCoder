
#include <cstdio>

int main(){
    int N, X;
    scanf("%d %d", &N, &X);
    int L[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &L[i]);
    }
    
    int D[N+1];
    D[0] = 0;
    for(int i = 1; i < N+1; i++){
        D[i] = D[i-1] + L[i-1];
    }

    int count = 0;
    for(int i = 0; i < N+1; i++){
        if(D[i] <= X){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
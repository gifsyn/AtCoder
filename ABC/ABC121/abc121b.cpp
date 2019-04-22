
#include <cstdio>

int main(){
    int N, M, C;
    scanf("%d %d %d", &N, &M, &C);
    int A[N][M], B[M];
    for(int i = 0; i < M; i++){
        scanf("%d", &B[i]);
    }
    for(int i = 0; i < N; i ++){
        for(int j = 0; j < M; j++){
            scanf("%d", &A[i][j]);
        }
    }

    int count = 0;
    int sum;
    for(int i = 0; i < N; i++){
        sum = 0;
        for(int j = 0; j < M; j++){
            sum += A[i][j] * B[j];
        }
        if(sum + C > 0){
            count++;
        }
        
    }
    printf("%d\n", count);

    return 0;
}
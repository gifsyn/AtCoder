
#include <cstdio>
#include <cstdlib>

int dfs(int, int, int, int); 

int N, A, B, C;

int main(){
    scanf("%d %d %d %d", &N, &A, &B, &C);
    int L[N];
    for(int i = 0; i < N; i++){
        scanf("%d", & L[i]);
    }

    printf("%d\n", dfs(0,0,0,0));

    return 0;
}

int dfs(int depth, int a, int b, int c){
    if(depth == N){
        return abs(a - A) + abs(b - B) + abs(c - C);
    }else{

    }

}
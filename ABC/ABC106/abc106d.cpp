
#include <cstdio>

int main(){
    int N,M,Q;
    scanf("%d %d %d",&N,&M,&Q);
    int L[M],R[M];
    for(int i = 0; i < M; i++){
        scanf("%d %d",&L[i],&R[i]);
    }
    int p[Q],q[Q];
    for(int i = 0; i < Q; i++){
        scanf("%d %d",&p[i],&q[i]);
    }
    int count;
    for(int i = 0; i < Q; i++){
        count = 0;
        for(int j = 0; j < M; j++){
            if(p[i] <= L[j] && R[j] <= q[i]){
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
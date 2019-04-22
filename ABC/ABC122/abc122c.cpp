
#include <cstdio>

int main(){
    int N, Q;
    scanf("%d %d", &N, &Q);
    char S[N + 1];
    scanf("%s", S);
    int l[Q], r[Q];
    for(int i = 0; i < Q; i++){
        scanf("%d %d", &l[i], &r[i]);
    }

    int T[N];
    for(int i = 0; i < N; i++){
        T[i] = 0;
    }
    for(int i = 1; i < N; i++){
        T[i] += T[i-1];
        if(S[i - 1] == 'A' && S[i] == 'C'){
                T[i]++;
        }
    }

    for(int i = 0; i < Q; i++){
        printf("%d\n", T[r[i] - 1] - T[l[i] - 1]);
    }

    return 0;
}
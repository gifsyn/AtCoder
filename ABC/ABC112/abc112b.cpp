
#include <cstdio>

int main(){
    int N,T;
    scanf("%d %d",&N, &T);
    int c[N], t[N];
    for(int i = 0; i < N; i++){
        scanf("%d %d",&c[i], &t[i]);
    }
    
    int a;
    int b;
    for(int i = 0; i < N; i++){
        a = t[i];
        for(int j = i + 1; j < N; j++){
            if(t[j] < a){
                a = t[j];
                b = c[j];
                t[j] = t[i];
                c[j] = c[i];
                t[i] = a;
                c[i] = b;
            }
        }
    }

    if(t[0] > T){
        printf("TLE\n");

        return 0;
    }
    
    int d = c[0];
    for(int i = 0; t[i] <= T; i++){
        if(c[i] < d){
            d = c[i];
        }
    }

    printf("%d\n",d);

    return 0;
}
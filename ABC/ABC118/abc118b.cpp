
#include <cstdio>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int k[n], a[n][30];
    for(int i = 0; i < n; i++){
        scanf("%d", &k[i]);
        for(int j = 0; j < k[i]; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int f[m];
    for(int i = 0; i < m; i++){
        f[i] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k[i]; j++){
            f[a[i][j] - 1]++;
        }
    }

    int count = 0;
    for(int i = 0; i < m; i++){
        if(f[i] == n){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
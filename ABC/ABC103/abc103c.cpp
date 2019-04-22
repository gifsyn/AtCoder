
#include <cstdio>

int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    for(int i = 0; i < N; i++){
        scanf(" %d",&a[i]);
    }
    int ans = 0;
    for(int i = 0; i < N; i++){
        ans = ans + a[i] - 1;
    }
    printf("%d\n",ans);

    return 0;
}
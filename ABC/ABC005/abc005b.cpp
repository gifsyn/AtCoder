
#include <cstdio>

int main(){
    int N;
    scanf("%d",&N);
    int T[N];
    int FTT = 100;
    for(int i = 0; i < N; i++){
        scanf("%d",&T[i]);
        if(FTT >= T[i]){
            FTT = T[i];
        }
    }
    printf("%d\n",FTT);

    return 0;
}
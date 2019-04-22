
#include <cstdio>

int main(){
    int N;
    scanf("%d",&N);
    int L[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&L[i]);
    }

    int max_L_i = 0;
    for(int i = 0; i < N; i++){
        if(L[max_L_i] < L[i]){
            max_L_i = i;
        }
    }

    int sum_L = 0;
    for(int i = 0; i < N; i++){
        sum_L += L[i];
    }
    
    if(L[max_L_i] < sum_L - L[max_L_i]){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}

#include <cstdio>

int main(){
    int N,M,X,Y;
    scanf("%d %d %d %d",&N,&M,&X,&Y);
    int x[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&x[i]);
    }
    int y[M];
    for(int i = 0; i < M; i++){
        scanf("%d",&y[i]);
    }

    if(Y - X < 1){
        printf("War\n");
        return 0;
    }else{
        int max_x = x[0];
        for(int i = 0; i < N; i++){
            if(x[i] > max_x){
                max_x = x[i];
            }
        }
        int min_y = y[0];
        for(int i = 0; i < M; i++){
            if(y[i] < min_y){
                min_y = y[i];
            }
        }

        if(max_x < Y && X < min_y && max_x < min_y){
            printf("No War\n");
            return 0;
        }else{
            printf("War\n");
            return 0;
        }
    }
    
}
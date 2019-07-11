
#include <cstdio>
#include <algorithm>

using namespace std;

#define X_MAX (int)10e5+1
#define Y_MAX (int)10e5+1
bool C[X_MAX][Y_MAX];
bool L_x[X_MAX];
bool L_y[Y_MAX];

int main(){
    int N;
    scanf("%d", &N);
    int x[N], y[N];
    for(int i = 0; i < N; i++){
        scanf("%d %d", &x[i], &y[i]);
        C[x[i]][y[i]] = true;
    }

    int min_x = x[0], max_x = x[0], min_y = y[0], max_y = y[0];
    for(int i = 0; i < N; i++){
        min_x = min(min_x, x[i]);
        max_x = max(max_x, x[i]);
        min_y = min(min_y, y[i]);
        max_y = max(max_y, y[i]);
    }

    for(int i = 0; i < N; i++){
        L_x[x[i]] = true;
    }

    for(int i = 0; i < N; i++){
        L_y[y[i]] = true;
    }

    
    int ans = 0;
    for(int i = min_x; i <= max_x; i++){
        for(int j = min_y; j <= max_y; j++){
            if(C[i][j] == false && L_x[i] == true && L_y[j] == true){
                ans++;
                printf("%d %d\n",i, j);
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
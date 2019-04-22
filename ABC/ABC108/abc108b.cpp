
#include <cstdio>

int main(){
    int x[4],y[4];
    scanf("%d %d %d %d",&x[0],&y[0],&x[1],&y[1]);
    int vx = x[1] - x[0],vy = y[1] - y[0];
    int v;
    for(int i = 2; i < 4; i++){
        v = vx;
        vx = - vy;
        vy = v;
        x[i] = x[i - 1] + vx;
        y[i] = y[i - 1] + vy;
    }
    printf("%d %d %d %d\n",x[2],y[2],x[3],y[3]);
    
    return 0;
}
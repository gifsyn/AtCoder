
#include <cstdio>

int main(){
    int W, H, x, y;
    scanf("%d %d %d %d", &W, &H, &x, &y);
    if( W == 2 * x && H == 2 * y ){
        printf("%lf %d\n", (double)W * (double)H / 2.0, 1);
    }else{
        printf("%lf %d\n", (double)W * (double)H / 2.0, 0);
    }

    return 0;
}
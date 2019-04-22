
#include <cstdio>
#include <cmath>

int main(){
    int n,t,a;
    scanf("%d %d %d",&n, &t, &a);
    int h[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&h[i]);
    }

    
    double diff[n];
    for(int i = 0; i < n; i++){
        diff[i] = fabs(a - (t - h[i] * 0.006));
    }


    int a_hi = 0;
    double b = diff[0];
    for(int i = 0; i < n; i++){
        if(diff[i] < b){
            b = diff[i];
            a_hi = i;
        }
    }

    printf("%d",a_hi + 1);
    
    return 0;
}
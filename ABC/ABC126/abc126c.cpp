
#include <cstdio>
#include <cmath>

int n, k;

double solve(){
    double ans = 0;
    double t;
    for(int i = 1; i <= n; i++){
        t = 1.0 / n;
        int a = i;
        while(a < k){
            a *= 2;
            t = t / 2;
        }
        
        ans += t;
    }

    return ans;
}


int main(){
    scanf("%d %d", &n, &k);

    printf("%.12lf\n", solve());

    return 0;
}
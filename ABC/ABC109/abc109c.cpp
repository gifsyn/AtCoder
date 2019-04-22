
#include <cstdio>
#include <cstdlib>

int gcd(int, int);

int main(){
    int n,X;
    scanf("%d %d",&n,&X);
    int x[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&x[i]);
    }

    if(n == 1){
        printf("%d\n",abs(x[0] - X));

        return 0;
    }

    int ans = gcd(abs(x[0] - X), abs(x[1] - x[0]));
    for(int i = 1; i + 1 < n; i++){
        ans = gcd(ans, abs(x[i + 1] - x[i]));
    }
    printf("%d\n",ans);

    return 0;
}

int gcd(int a, int b){
    int r,p;
    if(a < b){
        p = a;
        a = b;
        b = p;
    }

    r = a % b;
    while(r!=0){
        a = b;
        b = r;
        r = a % b;
    }
 
    return b;
}
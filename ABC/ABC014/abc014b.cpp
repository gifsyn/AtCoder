
#include <cstdio>

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += x % 2 * a[i];
        x /= 2;
    }
    printf("%d\n",ans);
    
    return 0;
}
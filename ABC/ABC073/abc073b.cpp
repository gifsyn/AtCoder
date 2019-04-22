
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int l[n],r[n];
    int ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%d %d",&l[i],&r[i]);
        ans += r[i] - l[i] + 1;
    }
    printf("%d\n",ans);

    return 0;
}

#include <cstdio>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int l[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&l[i]);
    }
    int b;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(l[i] < l[j]){
                b = l[i];
                l[i] = l[j];
                l[j] = b;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < k; i++){
        ans += l[i];
    }
    printf("%d\n",ans);

    return 0;
}
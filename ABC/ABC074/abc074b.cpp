
#include <cstdio>
#include <cstdlib>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int x[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&x[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(x[i] >= abs(x[i] - k)){
            ans += abs(x[i] - k);
        }else{
            ans += x[i];
        }
    }
    printf("%d\n",ans * 2);

    return 0;
}

#include <cstdio>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int ans = 1;
    for(int i = 1; i <= n; i++){
        if(ans * 2 <= ans + k){
            ans = ans * 2;
        }else{
            ans = ans + k;
        }
    }
    printf("%d\n",ans);

    return 0;
}
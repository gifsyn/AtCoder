
#include <cstdio>

int main(){
    int a,b,c,n;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d",&n);
    int d[3] = {a,b,c};
    int maxi = 0;
    for(int i = 0; i < 3; i++){
        if(d[i] > d[maxi]){
            maxi = i;
        }
    }

    int ans = 0;
    for(int i = 0; i < 3; i++){
        if(i != maxi){
            ans += d[i];
        }else{
            for(int j = 1; j <= n; j++){
                d[i] = d[i] * 2;
            }
            ans += d[i];
        }
    }
    printf("%d\n",ans);

    return 0;
}
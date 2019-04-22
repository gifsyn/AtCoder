
#include <cstdio>
#include <cstdlib>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int x[n];
    int b[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&x[i]);
        b[i] = x[i];
    }

    int v;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(abs(b[i]) > abs(b[j])){
                v = b[i];
                b[i] = b[j];
                b[j] = v;
            }
        }
    }

    int count_n = 0;
    int count_p = 0;
    int l = 0,r = 0;
    for(int i = 0; i < k; i++){
        if(b[i] < 0){
            count_n++;
            l = abs(b[i]);
        }else{
            count_p++;
            r = abs(b[i]);
        }
    }

    int ans = 0;
    if(l < r){
        ans += l * 2 + r;
    }else{
        ans += l + r * 2;
    }
    printf("%d\n",ans);

    return 0;
}

#include <cstdio>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int count = 0;
    for(int p = 1; p <= n; p++){
        for(int q = p; q <= n; q++){
            if((p + q) % k == 0 && p % k == q % k){
                for(int r = q; r <= n; r++){
                    if((q + r) % k == 0 && (r + p) % k == 0){
                        if(p == q && q == r){
                            count++;
                        }else if(p == q && q != r){
                            count += 3;
                        }else if(p != q && q == r){
                            count += 3;
                        }else if(p != q && q != r && r != p){
                            count += 6;
                        }
                    }
                }
                q += k - 1;
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
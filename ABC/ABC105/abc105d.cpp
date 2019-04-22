
#include <cstdio>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    unsigned long long count = 0;
    unsigned long long sum;
    for(int l = 0; l < n; l++){
        for(int r = l; r < n; r++){
            sum = 0;
            for(int i = l; i <= r; i++){
                sum += a[i];
            }
            if(sum % m == 0){
                count++;
            }
        }
    }
    printf("%lld\n",count);

    return 0;
}
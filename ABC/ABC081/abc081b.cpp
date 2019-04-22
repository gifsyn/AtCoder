
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int count_odd = 0;
    int count_ope = 0;

    while(count_odd == 0){
        for(int i = 0; i < n; i++){
            if(a[i] % 2 == 1){
                count_odd++;
            }
        }
        if(count_odd == 0){
            for(int i = 0; i < n; i++){
                a[i] = a[i] / 2;
            }
            count_ope++;
        }
    }
    printf("%d\n",count_ope);

    return 0;
}
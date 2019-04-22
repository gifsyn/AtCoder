
#include <cstdio>

int main(){
    int n,d,x;
    scanf("%d %d %d",&n,&d,&x);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0;; j++){
            if(j * a[i] + 1 <= d){
                sum++;
            }else{
                break;
            }
        }
    }
    printf("%d\n",sum + x);

    return 0;
}
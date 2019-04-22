
#include <cstdio>
#include <cmath>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        if(a[i] != 0){
            count++;
            sum += a[i];
        }
    }
    printf("%d\n",(int)ceil((double)sum / count));


    return 0;
}
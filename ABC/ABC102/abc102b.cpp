
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    int min = a[0],max = a[0];
    for(int i = 1; i < n; i++){
        if(min > a[i]){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("%d\n", max - min);

    return 0;
}
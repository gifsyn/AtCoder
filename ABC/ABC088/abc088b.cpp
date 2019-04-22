
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    
    int b;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }

    int point_A = 0;
    int point_B = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            point_A += a[i];
        }
        if(i % 2 == 1){
            point_B += a[i];
        }
    }
    printf("%d\n",point_A - point_B);

    return 0;
}
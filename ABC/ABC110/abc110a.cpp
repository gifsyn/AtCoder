
#include <cstdio>

int main(){
    int a[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&a[i]);
    }
    int v;
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(a[i] < a[j]){
                v = a[i];
                a[i] = a[j];
                a[j] = v;
            }
        }
    }

    printf("%d\n",a[0] * 10 + a[1] + a[2]);

    return 0;
}
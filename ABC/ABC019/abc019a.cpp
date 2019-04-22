
#include <cstdio>

int main(){
    int a[3];
    for(int i = 0; i < 3; i++){
        scanf(" %d",&a[i]);
    }
    
    int b;
    for(int i = 0; i < 3; i++){
        for(int j = i + 1; j < 3; j++){
            if(a[i] > a[j]){
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    printf("%d\n",a[1]);

    return 0;
}
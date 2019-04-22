
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[9];
    for(int i = 0; i < 9; i++){
        a[i] = (i + 1) * 100 + (i + 1) * 10 + (i + 1);
    }

    for(int i = 0; i < 9; i++){
        if(n <= a[i]){
            printf("%d\n",a[i]);
            break;
        }
    }

    return 0;
}
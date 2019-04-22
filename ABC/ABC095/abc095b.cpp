
#include <cstdio>

int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    int m[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&m[i]);
    }
    for(int i = 0; i < n; i++){
        x -= m[i];
    }
    int min = m[0];
    for(int i = 0; i < n; i++){
        if(m[i] < min){
            min = m[i];
        }
    }
    printf("%d\n",n + x / min);

    return 0;
}
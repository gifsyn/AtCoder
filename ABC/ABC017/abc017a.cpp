
#include <cstdio>

int main(){
    int s[3],e[3];
    for(int i = 0; i < 3; i++){
        scanf("%d %d",&s[i],&e[i]);
    }
    int sum = 0;
    for(int i = 0; i < 3; i++){
        sum += s[i] * e[i] / 10;
    }
    printf("%d\n",sum);

    return 0;
}
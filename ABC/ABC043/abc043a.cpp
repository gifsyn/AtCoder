
#include <cstdio>

int main(){
    int N;
    scanf("%d",&N);
    int sum = 0;
    for(int i = 1; i <= N; i++){
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}
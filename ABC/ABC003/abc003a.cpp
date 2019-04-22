
#include <cstdio>

int main(){
    int N;
    double s = 0;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++){
        s += (double)(10000 * i) / N;
    }
    printf("%d\n",(int)s);
    
    return 0;
}
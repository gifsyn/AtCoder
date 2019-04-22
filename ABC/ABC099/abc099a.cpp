
#include <cstdio>

int main(){
    int N;
    scanf("%d",&N);
    char CN[3];
    CN[0] = 'A';
    CN[1] = 'B';
    CN[2] = 'C' + (N + N / 1000) / 1000;
    printf("%c%c%c\n",CN[0],CN[1],CN[2]);
    return 0;
}
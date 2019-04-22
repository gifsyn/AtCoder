
#include <cstdio>
#include <cmath>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c = b;
    int count_d = 0;
    while(c > 0){
        c /= 10;
        count_d++;
    }
    int ab = a * pow(10,count_d) + b;
    printf("%d\n",ab * 2);
    
    return 0;
}
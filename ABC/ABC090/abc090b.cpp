
#include <cstdio>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int count = 0;
    for(int i = a; i <= b; i++){
        if(i / 10000 == i % 10){
            if( (i % 10000) / 1000 == ((i - i % 10) / 10) % 10){
                count++;
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
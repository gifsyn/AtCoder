
#include <cstdio>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    bool A[101],B[101];
    for(int i = 0; i < 101; i++){
        A[i] = false;
        B[i] = false;
        if(a <= i && i <= b){
            A[i] = true;
        }
        if(c <= i && i <= d){
            B[i] = true;
        }
    }

    int count = 0;
    for(int i = 0; i < 101; i++){
        if(A[i] == true && B[i] == true){
            count++;
        }
    }
    if(count > 0){
        count--;
    }
    printf("%d\n",count);

    return 0;
}
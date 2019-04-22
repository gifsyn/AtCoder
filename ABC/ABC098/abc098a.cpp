
#include <cstdio>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int a[3] = {A + B,A - B,A * B};
    int max = a[0];
    for(int i = 1; i < 3; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    printf("%d\n",max);

    return 0;
}

#include <cstdio>

int main(){
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int a[]= {A,B,C};
    int count5 = 0;
    int count7 = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] == 5){
            count5++;
        }
        if(a[i] == 7){
            count7++;
        }
    }

    if(count5 == 2 && count7 == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    printf("\n");

    return 0;
}
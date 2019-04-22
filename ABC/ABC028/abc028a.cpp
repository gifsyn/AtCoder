
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    if(n <= 59){
        printf("Bad\n");
    }else if(n <= 89){
        printf("Good\n");
    }else if(n <= 99){
        printf("Great\n");
    }else{
        printf("Perfect\n");
    }

    return 0;
}
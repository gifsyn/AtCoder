
#include <cstdio>

int main(){
    int count = 0;
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 1; i <= a; i++){
        if(i != a){
            for(int j = 1; j <= 31; j++){
                if(i == j){
                    count++;
                }
            }
        }else{
            for(int j = 1; j <= b; j++){
                if(i == j){
                    count++;
                }
            }
        }
    }
    printf("%d\n",count);

    return 0;
}

#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    int count;
    int count8 = 0;
    for(int i = 1; i <= n; i = i + 2){
        count = 0;
        for(int j = 1; j <= n; j++){
            if(i % j == 0){
                a = j;
                b = i / j;
                if(a < b){
                    count += 2;
                }else if(a == b){
                    count++;
                }else{
                    if(count == 8){
                        count8++;
                    }
                    break;
                }
            }
        }
    }
    printf("%d\n",count8);

    return 0;
}
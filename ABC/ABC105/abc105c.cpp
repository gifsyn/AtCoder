
#include <cstdio>
#include <cstdlib>
#include <cmath>

int main(){
    int n;
    scanf("%d",&n);
    int ans[100];
    for(int i = 0; i < 100; i++){
        ans[i] = 0;
    }
    int count_d = 0;
    for(int i = 1;; i++){
        if(n == 0){
            break;
        }else if(1 <= abs(n) % (int)pow(2,i) && abs(n) % (int)pow(2,i) <= (int)pow(2,i) / 2){
            ans[count_d] = 1;
            n -= 1 * (int)pow(-2,i - 1);
            if(n != 0){
                count_d++;
            }
        }else{
            // ans += 0 * (int)pow(10,i - 1);
            // n -= 0 * (int)pow(-2,i - 1);
            count_d++;
        }
    }
    for(int i = count_d; i >= 0; i--){
        printf("%d",ans[i]);
    }
    printf("\n");

    return 0;
}

#include <cstdio>
#include <cmath>
#define Inf 5000000000000000

int main(){
    char s[101];
    unsigned long long k;
    scanf("%s\n%lld",s,&k);
    int a;
    unsigned long long count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        a = s[i] - 48;
        if(a == 1){
            count++;
            if(count == k){
                printf("%d\n",a);

                return 0;
            }
            continue;
        }else{
            for(unsigned long long j = 1; j <= Inf; j++){
                if(count + pow(a,j) >= k){
                    printf("%d\n",a);

                    return 0;
                }
            }
            count += pow(a,Inf);
        }
    }

    return 0;
}
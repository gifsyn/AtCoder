
#include <cstdio>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d = a;
    int e = d % b;
    for(int i = 1;; i++){
        if(d % b == c){
            printf("YES\n");
            break;
        }else{
            d = d + a;
            if(d % b == e){
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}
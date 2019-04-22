
#include <cstdio>

int main(){
    int n;
    int a,b;
    int k;
    scanf("%d %d %d %d",&n,&a,&b,&k);
    int p[k];
    for(int i = 0; i < k; i++){
        scanf("%d",&p[i]);
    }
    bool check[n];
    for(int i = 0; i < n; i++){
        check[i] = true;
    }
    check[a - 1] = false;
    check[b - 1] = false;

    for(int i = 0; i < k; i++){
        if(check[p[i] - 1] == true){
            check[p[i] - 1] = false;
        }else{
            printf("NO\n");

            return 0;
        }
    }
    printf("YES\n");

    return 0;
}

#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    bool check[(int)1e5];
    for(int i = 0; i < (int)1e5; i++){
        check[i] = false;
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        if(check[a[i] - 1] == false){
            check[a[i] - 1] = true;
        }else{
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
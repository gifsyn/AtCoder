
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    bool b[n];
    for(int i = 0; i < n; i++){
        b[i] = true;
    }
    int count = 0;
    for(int i = 0;;){
        if(i == 1){
            printf("%d\n",count);
            break;
        }
        if(b[i] == true){
            b[i] = false;
            count++;
            i = a[i] - 1;
        }else{
            printf("-1\n");
            break;
        }
    }

    return 0;
}
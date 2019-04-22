
#include <cstdio>

int main(){
    int n,s,t,w;
    scanf("%d %d %d %d",&n,&s,&t,&w);
    int a[n - 1];
    for(int i = 0; i < n - 1; i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    if(s <= w && w <= t){
        count++;
    }
    for(int i = 0; i < n - 1; i++){
        w += a[i];
        if(s <= w && w <= t){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
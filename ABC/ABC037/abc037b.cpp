
#include <cstdio>

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    int l[q],r[q],t[q];
    for(int i = 0; i < q; i++){
        scanf("%d %d %d",&l[i],&r[i],&t[i]);
    }

    for(int i = 0; i < q; i++){
        for(int j = l[i] - 1; j <= r[i] - 1; j++){
            a[j] = t[i];
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n",a[i]);
    }

    return 0;
}
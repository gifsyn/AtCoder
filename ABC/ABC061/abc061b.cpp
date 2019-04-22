
#include <cstdio>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[m],b[m],c[n];
    for(int i = 0; i < m; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int i = 0; i < n; i++){
        c[i] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(i + 1 == a[j]){
                c[i]++;
            }
            if(i + 1 == b[j]){
                c[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d\n",c[i]);
    }

    return 0;
}
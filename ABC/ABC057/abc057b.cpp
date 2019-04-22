
#include <cstdio>
#include <cstdlib>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],b[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    int c[m],d[m];
    for(int i = 0; i < m; i++){
        scanf("%d %d",&c[i],&d[i]);
    }
    int min;
    int Hd;
    int p[n];
    for(int i = 0; i < n; i++){
        min = abs(a[i] - c[0]) + abs(b[i] - d[0]);
        p[i] = 0;
        for(int j = 0; j < m; j++){
            Hd = abs(a[i] - c[j]) + abs(b[i] - d[j]);
            if(Hd < min){
                min = Hd;
                p[i] = j;
            }
        }
        printf("%d\n",p[i] + 1);
    }

    return 0;
}
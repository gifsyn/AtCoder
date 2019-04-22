
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int p[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&p[i]);
    }
    int cp;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(p[i] > p[j]){
                cp = p[i];
                p[i] = p[j];
                p[j] = cp;
            }
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(p[i - 1] < p[i]){
            printf("%d\n",p[i - 1]);
            break;
        }
    }

    return 0;
}
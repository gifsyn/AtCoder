
#include <cstdio>

int main(){
    int n;
    scanf("%d",&n);
    int d[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&d[i]);
    }
    int count = 0;
    bool e[n];
    for(int i = 0; i < n; i++){
        e[i] = true;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(e[i] == true && e[j] == true && d[i] == d[j]){
                count++;
                e[j] = false;
            }
        }
    }
    printf("%d\n",n - count);

    return 0;
}
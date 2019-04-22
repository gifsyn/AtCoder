
#include <cstdio>

int main(){
    int p[3];
    int max = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d",&p[i]);
        if(max < p[i]){
            max = p[i];
        }
    }
    int ans = p[0] + p[1] + p[2] - max;
    printf("%d\n",ans);

    return 0;
}
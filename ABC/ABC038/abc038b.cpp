
#include <cstdio>

int main(){
    int h[2],w[2];
    for(int i = 0; i < 2; i++){
        scanf("%d %d",&h[i],&w[i]);
    }
    if(h[0] == h[1] || h[0] == w[1] || w[0] == h[1] || w[0] == w[1]){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}
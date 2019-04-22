
#include <cstdio>

int main(){
    int s[3];
    for(int i = 0; i < 3; i++){
        scanf("%d",&s[i]);
    }
    int r;
    for(int i = 0; i < 3; i++){
        r = 1;
        for(int j = 0; j < 3; j++){
            if(s[i] < s[j]){
                r++;
            }
        }
        printf("%d\n",r);
    }

    return 0;
}
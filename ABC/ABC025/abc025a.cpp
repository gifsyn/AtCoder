
#include <cstdio>

int main(){
    char s[6];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            count++;
            if(count == n){
                printf("%c%c\n",s[i],s[j]);
            }
        }
    }

    return 0;
}
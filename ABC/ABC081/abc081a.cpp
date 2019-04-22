
#include <cstdio>

int main(){
    char s[3];
    int count = 0;
    for(int i = 0; i < 3; i++){
        scanf("%c",&s[i]);
        if(s[i] == '1'){
            count++;
        }
    }
    printf("%d\n",count);

    return 0;
}
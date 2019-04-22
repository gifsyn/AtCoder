
#include <cstdio>

int main(){
    char s[4];
    scanf("%s",s);
    int count = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == 'o'){
            count++;
        }
    }
    printf("%d\n",700 + 100 * count);

    return 0;
}
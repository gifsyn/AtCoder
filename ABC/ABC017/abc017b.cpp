
#include <cstdio>

int main(){
    char x[51];
    scanf("%s",x);
    for(int i = 0; x[i] != '\0'; i++){
        if(x[i] == 'c' && x[i + 1] == 'h'){
            i++;
            continue;
        }else if(x[i] == 'o' || x[i] == 'k' || x[i] == 'u'){
            continue;
        }else{
            printf("NO\n");

            return 0;
        }
    }
    printf("YES\n");

    return 0;
}
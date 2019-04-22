
#include <cstdio>

int main(){
    char S[5];
    scanf("%s",S);
    int z = 0;
    for(int i = 0; i < 4; i++){
        if(S[i] == '+'){
            z++;
        }else if(S[i] == '-'){
            z--;
        }
    }
    printf("%d\n",z);

    return 0;
}
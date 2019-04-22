
#include <cstdio>

int main(){
    char s[13];
    scanf("%s",s);
    for(int i = 0; i < 13; i++){
        if(i == 0){
            if(!('A' <= s[i] && s[i] <= 'Z')){
                s[i] = s[i] - 32;
            }
        }else{
            if('A' <= s[i] && s[i] <= 'Z'){
                s[i] = s[i] + 32;
            }
        }
    }
    printf("%s\n",s);

    return 0;
}

#include <cstdio>

int main(){
    char s[5];
    scanf("%s", s);
    bool flag = true;
    for(int i = 0; i < 4; i++){
        if(s[i] == s[i+1]){
            flag = false;
        }
    }

    if(flag){
        printf("Good\n");
    }else{
        printf("Bad\n");
    }

    return 0;
}
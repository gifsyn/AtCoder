
#include <cstdio>

int main(){
    char s[4];
    scanf("%s",s);
    int counta = 0;
    int countb = 0;
    int countc = 0;
    for(int i = 0; i < 3; i++){
        if(s[i] == 'a'){
            counta++;
        }else if(s[i] == 'b'){
            countb++;
        }else if(s[i] == 'c'){
            countc++;
        }
    }
    if(counta == 1 && countb == 1 && countc == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
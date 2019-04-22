
#include <cstdio>

int main(){
    char s[1001];
    scanf("%s",s);
    char c;
    int count;
    bool check[1001];
    for(int i = 0; i < 1001; i++){
        check[i] = true;
    }

    for(int i = 0; s[i] != '\0'; i++){
        if(check[i] == true){
            c = s[i];
            count = 1;
            check[i] = false;
            for(int j = i + 1; s[j] != '\0'; j++){
                if(s[j] == c){
                    count++;
                    check[j] = false;
                    }else{
                        break;
                    }
            }
            printf("%c%d",c,count);
        }
    }
    printf("\n");

    return 0;
}
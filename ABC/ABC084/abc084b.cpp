
#include <cstdio>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char s[a + b + 1 + 1];
    scanf("\n%s",s);
    if(s[a] == '-'){
        for(int i = 0; s[i] != 0; i++){
            if(i != a){
                if('0' <= s[i] && s[i] <= '9'){
                    continue;
                }else{
                    printf("No\n");
                    
                    return 0;
                }
            }else{
                continue;
            }
        }
    }else{
        printf("No\n");

        return 0;
    }
    printf("Yes\n");

    return 0;
}
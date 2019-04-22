
#include <cstdio>
#include <cstdlib>

int main(){
    char s[(int)1e5];
    scanf("%s",s);
    int t;
    scanf("%d",&t);
    int x = 0, y = 0;
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == 'L'){
            x--;
        }else if(s[i] == 'R'){
            x++;
        }else if(s[i] == 'U'){
            y++;
        }else if(s[i] == 'D'){
            y--;
        }else{
            count++;
        }
    }

    int ans;
    if(t == 1){
        ans = abs(x) + abs(y) + count;
    }else{
        if(abs(x) + abs(y) >= count){
            ans = abs(x) + abs(y) - count;
        }else if((count - abs(x) - abs(y)) % 2 == 0){
            ans = 0;
        }else{
            ans = 1;
        }
    }

    printf("%d\n",ans);

    return 0;
}

#include <cstdio>
#include <cstdlib>

int main(){
    char s[10];
    scanf("%s",s);
    int l = 0;
    for(int i = 0; i < 10; i++){
        if('1' <= s[i] && s[i] <= '9'){
            l++;
        }
    }

    int m = 1000;
    int k;
    for(int i = 0; i <= l - 3; i++){
        k = (s[i] - 48) * 100 + (s[i + 1] - 48) * 10 + (s[i + 2] - 48);
        if(m > abs(753 - k)){
            m = abs(753 - k);
        }
    }

    printf("%d\n",m);

    return 0;
}
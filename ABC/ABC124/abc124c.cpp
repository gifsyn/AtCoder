
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAX_N = 10e5 + 1;
char s[MAX_N];

int main(){
    scanf("%s", s);

    int len = strlen(s);
    char t[len + 1], u[len];
    for(int i = 0; i < len; i++){
        if(i % 2 == 0){
            t[i] = '0';
            u[i] = '1';
        }else{
            t[i] = '1';
            u[i] = '0';
        }
    }

    int a = 0, b = 0;
    for(int i = 0; i < len; i++){
        if(s[i] != t[i]){
            a++;
        }
        if(s[i] != u[i]){
            b++;
        }
    }

    printf("%d\n", min(a, b));


    return 0;
}
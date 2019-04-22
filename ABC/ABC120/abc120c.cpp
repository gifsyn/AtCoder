
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    char s[100001];
    scanf("%s", s);
    int count_0 = 0;
    int count_1 = 0;
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '0'){
            count_0++;
        }else{
            count_1++;
        }
    }
    int ans = min(count_0, count_1) * 2;
    printf("%d\n", ans);

    return 0;
}
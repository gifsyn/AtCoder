
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, k;
const int MAX_N = 10e5;
char s[MAX_N + 1];
char t[MAX_N + 1];
int ans = 0;

void order();

int main(){
    scanf("%d %d", &n, &k);
    scanf("%s", s);
    order();
    printf("%d\n", ans);

    return 0;
}


void order(){
    int count_order = 0;
    int count_len = 0;
    for(int i = 0; i < n; i++){
        strcpy(t, s);
        count_order = 0;
        for(int j = i; j < n; j++){
            if(t[j] == '1'){
                continue;
            }else{
                t[j] = '1';
                for(int k = j + 1; s[k] == '0'; k++){
                    t[k] = '1';
                }
                count_order++;
                if(count_order == k){
                    break;
                }
            }
        }
        printf("%s\n", t);

        for(int i = 0; i < n; i++){
            if(t[i] == '1'){
                count_len++;
            }else{
                ans = max(ans, count_len);
                count_len = 0;
                continue;
            }
        }
    }
}
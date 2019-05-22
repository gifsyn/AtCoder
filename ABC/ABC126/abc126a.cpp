
#include <cstdio>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    char s[n+1];
    scanf("%s", s);
    s[k-1] = s[k-1] - ('A' - 'a');
    printf("%s\n", s);

    return 0;
}
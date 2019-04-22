
#include <cstdio>

int main(){
    char b;
    scanf("%c", &b);
    char ans;
    switch(b){
        case 'A':
            ans = 'T';
            break;
        case 'C':
            ans = 'G';
            break;
        case 'G':
            ans = 'C';
            break;
        case 'T':
            ans = 'A';
            break;
        default:
            break;
    }

    printf("%c\n", ans);

    return 0;
}
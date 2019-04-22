
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    long long int n;
    scanf("%lld", &n);
    long long int c[5];
    for(int i = 0; i < 5; i++){
        scanf("%lld", &c[i]);
    }

    long long int min_c = c[0];
    for(int i = 0; i < 5; i++){
        min_c = min(min_c, c[i]);
    }
    printf("%lld\n", (n + min_c - 1) / min_c + 4);

    return 0;
}
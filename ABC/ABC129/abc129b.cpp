
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int w[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &w[i]);
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += w[i];
    }

    int S1 = 0, S2;
    int ans = 100;
    for(int i = 0; i < n-1; i++){
        S1 += w[i];
        S2 = sum - S1;
        ans = min(ans, abs(S1 - S2));
    }

    printf("%d\n", ans);

    return 0;
}
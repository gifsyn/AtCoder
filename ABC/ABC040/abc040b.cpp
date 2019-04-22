
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int ans= 100000;
    int d;
    for(int i = 1; i <= n; i++){
        d = abs(i - n / i) + n % i;
        ans = min(ans, d);
    }
    printf("%d\n",ans);

    return 0;
}
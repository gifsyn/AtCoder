
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int a, b, k;
    scanf("%d %d %d",&a, &b, &k);

    int c = min(a, b);
    int count = 0;
    int ans;
    for(int i = c; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            count++;
            if(count == k){
                ans = i;
                break;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
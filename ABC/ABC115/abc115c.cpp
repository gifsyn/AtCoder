
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    int h[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&h[i]);
    }

    sort(h, h + n);

    int m = h[k - 1] - h[0];
    for(int i = k - 1; i < n; i++){
        if(m > (h[i] - h[i - k + 1])){
            m = h[i] - h[i - k + 1];
        }
    }
    printf("%d\n",m);
    
    return 0;
}
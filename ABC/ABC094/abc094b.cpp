
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    int a[m];
    for(int i = 0; i < m; i++){
        scanf("%d",&a[i]);
    }

    bool check_TG[n + 1];
    for(int i = 0; i < n + 1; i++){
        check_TG[i] = false;
    }
    for(int i = 0; i < m; i++){
        check_TG[a[i]] = true;
    }

    int count_l = 0;
    for(int i = x; i >= 0; i--){
        if(check_TG[i]){
            count_l++;
        }
    }
    int count_r = 0;
    for(int i = x; i <= n; i++){
        if(check_TG[i]){
            count_r++;
        }
    }
    printf("%d\n",min(count_l,count_r));

    return 0;
}
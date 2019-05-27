
#include <cstdio>
#include <algorithm>

using namespace std;

#define m_MAX (int)1e5
int n, m;
int L[m_MAX + 1];
int R[m_MAX + 1];

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 0; i < m; i++){
        scanf("%d %d", &L[i], &R[i]);
    }

    int L_max = L[0];
    int R_min = R[0];
    for(int i = 0; i < m; i++){
        L_max = max(L_max, L[i]);
        R_min = min(R_min, R[i]);
    }

    int ans;
    ans = R_min - L_max + 1;
    if(ans < 0){
        ans = 0;
    }
    printf("%d\n", ans);

    return 0;
}
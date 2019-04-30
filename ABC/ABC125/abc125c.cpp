
#include <cstdio>
#include <algorithm>

using namespace std;

#define MAX_N (int)1e5
int N;
int A[MAX_N + 1];

int gcd(int, int);
int solve();

int main(){
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    printf("%d\n", solve());

    return 0;
}


int gcd(int a, int b){
    int c;
    if(a < b){
        c = b;
        b = a;
        a = c;
    }
    int r;
    while(a % b){
        r = a % b;
        a = b;
        b = r;
    }

    return b;
}


int solve(){
    int L[N], R[N], M[N];
    L[0] = A[0];
    for(int i = 1; i < N; i++){
        L[i] = gcd(L[i - 1], A[i]);
    }
    
    R[N - 1] = A[N - 1];
    for(int i = N - 2; i >= 0; i--){
        R[i] = gcd(R[i + 1], A[i]);
    }

    M[0] = R[1];
    M[N - 1] = L[N - 2];
    for(int i = 1; i < N - 1; i++){
        M[i] = gcd(L[i - 1], R[i + 1]);
    }

    int ans = M[0];
    for(int i = 0; i < N; i++){
        ans = max(ans, M[i]);
    }

    return ans;
}
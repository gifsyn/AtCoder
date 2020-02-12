#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    vector<ll> p(N);
    for(int i=0; i<N;i++){
        cin >> p[i];
    }

    double pex[N];
    for(int i=0; i<N; i++){
        pex[i] = (p[i]+1.0)/2;
    }

    double ans = 0;
    for(int i=0; i<K; i++){
        ans += pex[i];
    }

    double sum = ans;
    for(int i=1; i+K-1<N; i++){
        sum = sum-pex[i-1]+pex[i+K-1];
        ans = max(ans, sum);
    }

    printf("%.8lf\n", ans);

    return 0;
}
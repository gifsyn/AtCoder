#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    vector<ll> H(N);
    for(int i= 0; i<N; i++){
        cin >> H[i];
    }

    sort(H.begin(), H.end(), greater<ll>());

    ll ans = 0;
    for(int i=K; i<N; i++){
        ans += H[i];
    }

    cout << ans << endl;

    return 0;
}
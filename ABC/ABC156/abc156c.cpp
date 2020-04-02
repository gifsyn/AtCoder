#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<ll> X(N);
    for(int i=0; i<N; i++){
        cin >> X[i];
    }

    ll cost;
    ll ans = 100*100*100;
    for(ll p=1; p<=100; p++){
        cost = 0;
        for(int i=0; i<N; i++){
            cost += (X[i]-p)*(X[i]-p);
        }
        ans = min(ans, cost);
    }

    cout << ans << endl;

    return 0;
}
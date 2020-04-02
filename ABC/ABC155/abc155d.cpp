#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    ll r;
    while(a % b){
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}

ll lcm(ll a, ll b){
    return a*b/gcd(a, b);
}

ll calcGCD(vector<ll> &A){
    ll N = A.size();
    ll res = A[0];
    for(ll i = 1; i < N; i++){
        res = gcd(res, A[i]);
    }
    return res;
}

ll calcLCM(vector<ll> &A){
    ll N = A.size();
    ll res = A[0];
    for(ll i = 1; i < N; i++){
        res = lcm(res, A[i]);
    }
    return res;
}

int main(){
    ll N, M;
    cin >> N >> M;
    vector<ll> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    for(int i=0; i<N; i++){
        A[i] /= 2LL;
    }

    int LCM_A = calcLCM(A);
    cout << (M+LCM_A)/(2LL*LCM_A) << endl;

    return 0;
}
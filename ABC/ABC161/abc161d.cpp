#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll K;
    cin >> K;

    queue<ll> Q;
    for(int i=1; i<=9; i++){
        Q.push(i);
    }

    for(int i=0; i<K-1; i++){
        ll s = Q.front(); // i番目のLunlun Number
        Q.pop();
        for(int j=-1; j<=1; j++){
            ll add = (s%10)+j;
            if(0<=add && add<=9){
                Q.push(s*10+add);
            }
        }
    }
    cout << Q.front() << endl;


    return 0;
}
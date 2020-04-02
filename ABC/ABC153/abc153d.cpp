#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll H;
    cin >> H;

    ll cnt = 0;
    ll mns = 1;
    while(true){
        if(H == 1){
            cnt += mns;
            break;
        }else{
            cnt += mns;
            H = H/2;
            mns = mns*2;
        }
    }

    cout << cnt << endl;

    return 0;
}
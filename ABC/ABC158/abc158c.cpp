#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll A, B;
    cin >> A >> B;
    
    for(int i = 1; i < 10000; i++){
        double a = i*8/100;
        double b = i*10/100;
        if(floor(a) == A && floor(b) == B){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
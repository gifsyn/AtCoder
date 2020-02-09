
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int A, B, K;
    cin >> A >> B >> K;

    if(A >= K){
        cout << A-K << " " << B << endl;
    }else if(B >= K-A){
        cout << 0 << " " << B-(K-A) << endl;
    }else{
        cout << 0 << " " << 0 << endl;
    }

    return 0;
}
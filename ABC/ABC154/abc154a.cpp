#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string S, T, U;
    int A, B;
    cin >> S >> T;
    cin >> A >> B;
    cin >> U;

    if(U == S){
        cout << A-1 << " " << B << endl;
    }else{
        cout << A << " " << B-1 << endl;
    }

    return 0;
}
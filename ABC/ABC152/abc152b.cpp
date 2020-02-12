#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int a, b;
    cin >> a >> b;
    string A = to_string(a);
    string B = to_string(b);
    string S;
    for(int i=0; i<b; i++){
        S += A;
    }
    string T;
    for(int i=0; i<a; i++){
        T += B;
    }

    if(S <= T){
        cout << S << endl;
    }else{
        cout << T << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int X;
    cin >> X;
    int cnt500 = 0;
    int cnt5 = 0;
    while(true){
        if(X >= 500){
            X -= 500;
            cnt500++;
        }else if(X >= 5){
            X -= 5;
            cnt5++;
        }else{
            break;
        }
    }

    cout << cnt500*1000+cnt5*5 << endl;

    return 0;
}
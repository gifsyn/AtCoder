#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, K;
    cin >> N >> K;
    int cnt = 0;
    while(true){
        N /= K;
        cnt++;
        if(N == 0){
            break;
        }
    }
    cout << cnt << endl;

    return 0;
}
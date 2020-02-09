#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int cnt = 0;
    for(int i=0; i+2<N; i++){
        if("ABC" == S.substr(i, 3)){
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
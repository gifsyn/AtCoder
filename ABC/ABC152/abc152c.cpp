#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<int> P(N);
    for(int i=0; i<N; i++){
        cin >> P[i];
    }
    
    int cnt = 0;
    int min_P = N+1;
    for(int i=0; i<N; i++){
        min_P = min(min_P, P[i]);
        if(min_P == P[i]){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
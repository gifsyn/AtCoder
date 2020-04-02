#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for(int i=0; i<N; i++){
        cin >> S[i];
    }

    map<string, int> M;
    for(int i=0; i<N; i++){
        M[S[i]]++;
    }

    int max_cnt = 0;
    for(int i=0; i<N; i++){
        max_cnt = max(max_cnt, M[S[i]]);
    }

    for(auto i : M){
        if(i.second == max_cnt){
            cout << i.first << endl;
        }
    }

    return 0;
}
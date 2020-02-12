#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> p(M);
    vector<string> S(M);
    for(int i=0; i<M; i++){
        cin >> p[i] >> S[i];
    }

    int cnt_AC = 0;
    int cnt_PN = 0;
    vector<int> p_AC(N, 0);
    vector<int> p_WA(N, 0);


    for(int i=0; i<M; i++){
        if(S[i] == "AC"){
            if(p_AC[p[i]-1] == 0){
                cnt_AC++;
                cnt_PN += p_WA[p[i]-1];
            }
            p_AC[p[i]-1]++;
        }

        if(S[i] == "WA"){
            p_WA[p[i]-1]++;
        }
    }

    cout << cnt_AC << " " << cnt_PN << endl;

    return 0;
}
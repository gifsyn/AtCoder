#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string S; cin >> S;
    deque<char> dS;
    for(int i=0; i<S.size(); i++){
        dS.push_back(S[i]);
    }
    int Q; cin >> Q;
    int T, F;
    char C;
    int rev = 0;
    for(int i=0; i<Q; i++){
        cin >> T;
        if(T == 1){
            rev = 1-rev;
        }else{ // T == 2
            cin >> F >> C;
            if(rev == 1){
                F = 3-F;
            }
            if(F == 1){
                dS.push_front(C);
            }else{ // F == 2
                dS.push_back(C);
            }
        }
    }

    if(rev == 1){
        reverse(dS.begin(), dS.end());
    }
    
    for(auto s : dS){
        cout << s;
    }
    cout << endl;

    return 0;
}
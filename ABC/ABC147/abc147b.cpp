#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    string S;
    cin >> S;
    string L;
    string R;
    if(S.size() % 2 == 0){
        L = S.substr(0,S.size()/2);
        R = S.substr(S.size()/2);
    }else{
        L = S.substr(0,S.size()/2);
        R = S.substr(S.size()/2+1);
    }
    
    int ans = 0;
    for(int i = 0; i < S.size()/2; i++){
        if(L[i] != R[L.size()-1-i]){
            ans++;
        }
    }
    cout << ans << endl;

  return 0;
}
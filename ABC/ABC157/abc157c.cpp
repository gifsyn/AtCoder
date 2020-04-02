#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> s(M), c(M);
    for(int i=0; i<M; i++){
        cin >> s[i] >> c[i];
    }

    for(int i=0; i<= 999; i++){
        string str = to_string(i);
        if(str.size() == N){
            bool flag = true;
            for(int j=0; j<M; j++){
                if(str[s[j]-1] != '0'+c[j]){
                    flag = false;
                    break;
                }
            }
            if(flag == true){
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}
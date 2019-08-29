
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    vector<int> cnt_E(N, 0);
    vector<int> cnt_W(N, 0);
    int cnt;
    cnt = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'E'){
            cnt++;
            cnt_E[i] = cnt;
        }else{
            cnt_E[i] = cnt;
        }
    }

    cnt = 0;
    for(int i = N-1; i >= 0; i--){
        if(S[i] == 'W'){
            cnt++;
            cnt_W[i] = cnt;
        }else{
            cnt_W[i] = cnt;
        }
    }
    

    int ans = 1;
    for(int i = 0; i < N; i++){
        ans = max(ans, cnt_E[i]+cnt_W[i]);
    }
    ans = N - ans;

    cout << ans << endl;


    return 0;
}
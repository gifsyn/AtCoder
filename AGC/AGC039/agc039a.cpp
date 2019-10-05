
#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    long long K;
    cin >> K;

    bool changed_S[S.size()];
    for(int i = 0; i < S.size(); i++){
        changed_S[i] = false;
    }
    for(int i = 1; i < S.size(); i++){
        if(changed_S[i-1] != true && S[i-1] == S[i]){
            changed_S[i] = true;
        }
    }
    long long cnt_1 = 0;
    for(int i = 0; i < S.size(); i++){
        if(changed_S[i] == true){
            cnt_1++;
        }
    }
    // cout << "cnt_1 " << cnt_1 << endl;


    string T2 = S + S;
    bool changed_T2[T2.size()];
    for(int i = 0; i < T2.size(); i++){
        changed_T2[i] = false;
    }
    for(int i = 1; i < T2.size(); i++){
        if(changed_T2[i-1] != true && T2[i-1] == T2[i]){
            changed_T2[i] = true;
        }
    }
    long long cnt_2 = 0;
    for(int i = 0; i < T2.size(); i++){
        if(changed_T2[i] == true){
            cnt_2++;
        }
    }
    // cout << "cnt_2 " << cnt_2 << endl;


    string T3 = S + S + S;
    bool changed_T3[T3.size()];
    for(int i = 0; i < T3.size(); i++){
        changed_T3[i] = false;
    }
    for(int i = 1; i < T3.size(); i++){
        if(changed_T3[i-1] != true && T3[i-1] == T3[i]){
            changed_T3[i] = true;
        }
    }
    long long cnt_3 = 0;
    for(int i = 0; i < T3.size(); i++){
        if(changed_T3[i] == true){
            cnt_3++;
        }
    }
    // cout << "cnt_3 " << cnt_3 << endl;


    long long d1 = cnt_2 - cnt_1;
    long long d2 = cnt_3 - cnt_2;
    
    long long ans = 0;
    if(K == 1){
        ans = cnt_1;
    }else{
        ans += cnt_1;
        if(K-1 % 2 == 0){
            ans += (d1+d2)*(K-1)/2;
        }else{
            ans += (d1+d2)*(K-2)/2+d1;
        }
    }

    cout << ans << endl;


    return 0;
}

#include <iostream>

using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    int p = S.size() - T.size();
    bool judge = false;
    for(int i = p; i >= 0; i--){
        judge = true;
        for(int j = 0; j < T.size(); j++){
            if(T[j] != S[j+i] && S[j+i] != '?'){
                judge = false;
            }
        }
        if(judge == true){
            p = i;
            break;
        }
    }
    
    if(judge == false){
        cout << "UNRESTORABLE" << endl;
    }else{
        for(int i = p; i < T.size()+p; i++){
            if(S[i] == '?'){
                S[i] = T[i-p];
            }
        }
        for(int i = 0; i < S.size(); i++){
            if(S[i] == '?'){
                S[i] = 'a';
            }
        }
        cout << S << endl;
    }


    return 0;
}
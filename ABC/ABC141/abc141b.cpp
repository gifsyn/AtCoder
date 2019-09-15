
#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    bool F = true;
    for(int i = 0; i < S.size(); i++){
        if(i % 2 == 0){
            if(!(S[i] == 'R' || S[i] == 'U' || S[i] == 'D')){
                F = false;
                break;
            }
        }else{
            if(!(S[i] == 'L' || S[i] == 'U' || S[i] == 'D')){
                F = false;
                break;
            }
        }
    }

    if(F){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    
    return 0;
}
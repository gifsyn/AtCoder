
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string> S(3);
    for(int i = 0; i < 3; i++){
        cin >> S[i];
    }

    char ans;
    char i = 'a';
    while(true){
        if(i == 'a'){
            if(S[0].length() == 0){
                ans = 'A';
                break;
            }
            i = S[0][0];
            S[0].erase(S[0].begin());
        }else if(i == 'b'){
            if(S[1].length() == 0){
                ans = 'B';
                break;
            }
            i = S[1][0];
            S[1].erase(S[1].begin());
        }else{
            if(S[2].length() == 0){
                ans = 'C';
                break;
            }
            i = S[2][0];
            S[2].erase(S[2].begin());
        }
    }

    cout << ans << endl;


    return 0;
}
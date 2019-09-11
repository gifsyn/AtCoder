
#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    bool ans = true;
    if(S.size() < 5){
        ans = false;
    }else{
        while(S.size() > 0){
            if(S.size() >= 7 && S.substr(S.size()-7, 7) == "dreamer"){
                S.erase(S.end()-7, S.end());
            }else if(S.size() >= 6 && S.substr(S.size()-6, 6) == "eraser"){
                S.erase(S.end()-6, S.end());
            }else if(S.size() >= 5 && (S.substr(S.size()-5, 5) == "dream" || S.substr(S.size()-5, 5) == "erase")){
                S.erase(S.end()-5, S.end());
            }else{
                ans = false;
                break;
            }
        }
    }

    if(ans == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }


    return 0;
}
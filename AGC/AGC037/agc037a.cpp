
#include <iostream>
#include <string>

using namespace std;

int main(){
    string S;
    cin >> S;

    int ans = 1;
    string w = S.substr(0, 1);
    int i = 1;
    int len = S.size();
    while(true){
        if(i == len){
            break;
        }

        for(int j = 1; i+j <= len; j++){
            if(w != S.substr(i, j)){
                w = S.substr(i, j);
                i += j;
                ans++;
                break;
            }
            if(w == S.substr(i, j) && i+j == len){
                i += j;
                break;
            }
        }
    }

    cout << ans << endl;


    return 0;
}
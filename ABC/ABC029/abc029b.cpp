
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char S[11];
    int ans = 0;
    for(int i = 0; i < 12; i++){
        cin >> S;
        for(int j = 0; j < strlen(S); j++){
            if(S[j] == 'r'){
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
    

    return 0;
}
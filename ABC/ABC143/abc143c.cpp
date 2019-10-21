
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 1;
    for(int i = 1; i < S.size(); i++){
        if(S[i-1] != S[i]){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
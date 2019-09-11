
#include <iostream>
#include <vector>

using namespace std;

int main(){
    string S;
    cin >> S;

    int cnt = 1;
    for(int i = 0; i < S.size()-1; i++){
        if(S[i] != S[i+1]){
            cnt++;
        }
    }

    cout << cnt-1 << endl;


    return 0;
}
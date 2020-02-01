
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++){
        S[i] = 'A' + (S[i] - 'A' + N) % 26;
    }
    cout << S << endl;

    return 0;
}
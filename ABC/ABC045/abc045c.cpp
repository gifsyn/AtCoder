
#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;
    long long ans = 0;
    long long sum, a;
    for(int bit = 0; bit < (1<<(S.size()-1)); bit++){
        sum = 0;
        a = S[0] - '0';
        for(int i = 0; i < S.size()-1; i++){
            if(bit & (1 << i)){
                sum += a;
                a = S[i+1] - '0';
            }else{
                a = a * 10 + S[i+1] - '0';
            }
        }
        sum += a;
        ans += sum;
    }

    cout << ans << endl;


    return 0;
}
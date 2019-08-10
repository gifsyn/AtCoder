
#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long p = 1e9+7;

int main(){
    string s;
    cin >> s;

    vector< vector<long long> > dp(s.size(), vector<long long>(13, 0));

    if(s[0] == '?'){
        for(int i = 0; i < 10; i++){
            dp[0][i] = 1;
        }
    }else{
        dp[0][s[0]-'0'] = 1;
    }

    for(int i = 0; i < s.size()-1; i++){
        if(s[i+1] == '?'){
            for(int j = 0; j < 13; j++){
                for(int k = 0; k < 10; k++){
                    dp[i+1][(j*10%13+k)%13] += dp[i][j];
                    dp[i+1][(j*10%13+k)%13] %= p;
                }
            }
        }else{
            for(int j = 0; j < 13; j++){
                dp[i+1][(j*10%13+(s[i+1]-'0'))%13] += dp[i][j];
                dp[i+1][(j*10%13+(s[i+1]-'0'))%13] %= p;
            }
        }
    }

    cout << dp[s.size()-1][5] << endl;
    

    return 0;
}
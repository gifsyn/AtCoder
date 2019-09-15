
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int dp[5001][5001];

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;

    for(int i = N-1; i >= 0; i--){
        for(int j = N-1; j >= 0; j--){
            if(S[i] != S[j]){
                dp[i][j] = 0;
            }else{
                dp[i][j] = dp[i+1][j+1] + 1;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i >= j){
                continue;
            }else{
                int now = min(dp[i][j], j-i);
                ans = max(ans, now);
            }
        }
    }

    cout << ans << endl;


    return 0;
}
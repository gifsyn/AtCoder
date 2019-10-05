
#include <iostream>

using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    long long w[N], v[N];
    for(int i = 0; i < N; i++){
        cin >> w[i] >> v[i];
    }

    long long dp[N+1][W+1] = {}; // dp[i][j] := i番目までの商品から選んで重さの合計がj以下の時の価値の最大値
    
    for(int i = 1; i <= N; i++){
        for(int j = 0; j <= W; j++){
            dp[i][j] = dp[i-1][j];
            if(j - w[i-1] >= 0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }

    cout << dp[N][W] << endl;


    return 0;
}
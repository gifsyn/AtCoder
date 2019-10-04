
#include <iostream>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    long long h[N];
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    // 足場 0 ~ N-1
    long long dp[N]; // dp[i] := 足場i番目までの最小コスト
    for(int i = 0; i < N; i++){
        dp[i] = __LONG_LONG_MAX__; // 十分大きな値で初期化
    }
    dp[0] = 0; // 足場 0
    dp[1] = abs(h[1]-h[0]); // 足場 1
    for(int i = 2; i < N; i++){
        for(int j = 1; (j <= K && i-j >= 0); j++){
            dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
        }
    }

    cout << dp[N-1] << endl;


    return 0;
}
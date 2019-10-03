
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    long long h[N];
    for(int i = 0; i < N; i++){
        cin >> h[i];
    }

    // 足場 0 ~ N-1
    long long dp[N]; // dp[i] := 足場i番目までの最小コスト
    dp[0] = 0; // 足場 0
    dp[1] = abs(h[1]-h[0]); // 足場 1
    for(int i = 2; i < N; i++){
        dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
    }

    cout << dp[N-1] << endl;


    return 0;
}
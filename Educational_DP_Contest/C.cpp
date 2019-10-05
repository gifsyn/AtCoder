
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    long long a[N], b[N], c[N];
    for(int i = 0; i < N; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    long long dp[N][3]; // dp[i][j] := i-1日目にjを選んだ時のi日目までの幸福度の最大値
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    for(int i = 1; i < N; i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2])+a[i];
        dp[i][1] = max(dp[i-1][2], dp[i-1][0])+b[i];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1])+c[i];
    }

    cout << max({dp[N-1][0], dp[N-1][1], dp[N-1][2]}) <<endl;


    return 0;
}
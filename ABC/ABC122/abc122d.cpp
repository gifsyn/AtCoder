
#include <iostream>

using namespace std;

long long MOD = 1e9+7;

int main(){
	int N;
	cin >> N;

	long long dp[N+1][5][5][5];
    for(int n = 0; n < N+1; n++){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < 5; k++){
                    dp[n][i][j][k] = 0;
                }
            }
        }
    }
    dp[0][0][0][0] = 1;

	for(int n = 0; n < N; n++){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < 5; k++){
                    for(int l = 1; l < 5; l++){
                        if(i == 1 && j == 2 && l == 3) continue;
                        if(i == 1 && k == 2 && l == 3) continue;
                        if(j == 1 && k == 2 && l == 3) continue;
                        if(j == 2 && k == 1 && l == 3) continue;
                        if(j == 1 && k == 3 && l == 2) continue;

                        dp[n+1][j][k][l] += dp[n][i][j][k];
                        dp[n+1][j][k][l] %= MOD;
                    }
                }
            }
        }
    }

	long long ans = 0;
    for(int j = 1; j < 5; j++){
        for(int k = 1; k < 5; k++){
            for(int l = 1; l < 5; l++){
                ans += dp[N][j][k][l];
                ans %= MOD;
            }
        }
    }

    cout << ans << endl;


    return 0;
}
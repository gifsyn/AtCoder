
#include <iostream>
#include <vector>

using namespace std;

long long dp[51][51][2501];

int main(){
    long long N, A;
    cin >> N >> A;
    vector<long long> x(N+1);
    for(int i = 0; i < N; i++){
        cin >> x[i+1];
    }
    
    
    // dp[j][k][s] := (x_1 ... x_j から k 枚選んで合計 s にするような選び方の総数)
    dp[0][0][0] = 1;
    for(long long j = 0; j < N+1; j++){
        for(long long k = 0; k < N+1; k++){
            for(long long s = 0; s < N*A+1; s++){
                if(j >= 1 && s < x[j]){ // j枚目を選ばないで 合計s
                    dp[j][k][s] = dp[j-1][k][s];
                }else if(j >= 1 && k >= 1 && s >= x[j]){ // j枚目を選ばないで合計s と j枚目を選んで合計s
                    dp[j][k][s] = dp[j-1][k][s] + dp[j-1][k-1][s-x[j]];
                }
            }
        }
    }

    long long ans = 0;
    for(int k = 1; k < N+1; k++){
        ans += dp[N][k][k*A];
    }
    cout << ans << endl;


    return 0;
}

#include <iostream>

using namespace std;

int A[2][101];

int main(){
    int N;
    cin >> N;
    for(int i = 0; i < 2; i++){
        for(int j = 1; j <= N; j++){
            cin >> A[i][j];
            A[i][j] += A[i][j-1];
        }
    }

    int ans = 0;
    for(int i = 1; i <= N; i++){
        ans = max(ans, A[0][i] + (A[1][N] - A[1][i-1]));
    }
    cout << ans << endl;
    
    
    return 0;
}
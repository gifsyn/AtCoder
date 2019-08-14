
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int T[N];
    long long ans = 0;
    for(int i = 0; i < N; i++){
        cin >> T[i];
        ans += (long long)T[i];
    }
    int M;
    cin >> M;
    int P[M], X[M];
    for(int i = 0; i < M; i++){
        cin >> P[i] >> X[i];
    }

    for(int i = 0; i < M; i++){
        cout << ans-(long long)T[P[i]-1]+(long long)X[i] << endl;
    }


    return 0;
}
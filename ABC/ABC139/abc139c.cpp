
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    int H[N];
    for(int i = 0; i < N; i++){
        cin >> H[i];
    }

    vector<int> R(N, 0);
    for(int i = N-1; i >= 0; i--){
        if(i == N-1){
            R[i] = 0;
        }else if(H[i] >= H[i+1]){
            R[i] += R[i+1] + 1;
        }
    }

    int ans = 0;
    for(int i = 0; i < N; i++){
        ans = max(ans, R[i]);
    }

    cout << ans << endl;

    return 0;
}